
########## GLOBAL CONSTANTS ##########
#* FILENAME
FILENAME = "Sandbox.cpp"


########## CODE REPLACEMENTS ##########

#* DataTypes
#! If found, add to dictionary to replace references later in code
TYPES__: dict[str, str] = { 
    "int local_"          : "int int_",
    "char local_"         : "char char_",
    "long local_"         : "long long_",
    "int **local_"        : "int** 2DintPtr_",
    "basic_string local_" : "std::string str_",
    "basic_string"        : "std::string",
}

#* STD::STRINGS
#? For IO elements, if the 1st line matches, check for the next 2
#? If all 3 match, replace the 3 indexes with a single string
CLASSES__: dict[str, str] = {  
    "std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string()":"std::string('')",
    "std::__cxx11::std::string<char,std::char_traits<char>,std::allocator<char>>::std::string\n            (":"std::string(",
    "std::__cxx11::std::string<char,std::char_traits<char>,std::allocator<char>>::~std::string\n            ((std::string<char,std::char_traits<char>,std::allocator<char>> *)":"~std::string(",
    "std::__cxx11::std::string<char,std::char_traits<char>,std::allocator<char>>::std::string();":"",
    "std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string\n            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)":"delete ("
}


#* IO ELEMENTS
#? For IO elements, if the 1st line matches, check for the next 2
#? If all 3 match, replace the 3 indexes with a single string
IO__: dict[str, str] = {
    "pbVar1 = std::operator<<(pbVar1,":"std::cout << (",
    "pbVar1 = std::operator<<((basic_ostream *)std::cout,\n":"std::cout << (",
    "std::operator<<((basic_ostream *)std::cout,":"std::cout << (",
    "std::operator>>((basic_istream *)std::cin,":"std::cin >> (",
    "pbVar1 = std::operator<<((basic_ostream *)std::cout,":"std::cout << (",
    "std::basic_ostream<char,std::char_traits<char>>::operator<<\n              ((basic_ostream<char,std::char_traits<char>> *)pbVar1,\n               std::endl<char,std::char_traits<char>>);":"std::cout << std::endl;",
    "pbVar1 = (basic_ostream *)\n             std::basic_ostream<char,std::char_traits<char>>::operator<<\n                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,\n                        std::endl<char,std::char_traits<char>>);":"std::cout << std::endl;",
    
    "                             ":" ",
    "                            );\n":" ",
    "pbVar1 = ":"",
    "std::basic_ostream<char,std::char_traits<char>>::operator<<\n":"",
    "((basic_ostream<char,std::char_traits<char>> *)pbVar1,":"",
    "           std::endl<char,std::char_traits<char>>);":"std::cout << std::endl;",
    
    "while( true )":"while(1)",
}

##### CLASSES #####

#* FUNCTION CLASS
class GhidraFunc():
    
    def __init__(self, rawlines: list[str], fName: str) -> None:
        self.fileName:     str       = fName
        self.rawLines:     str       = "".join(rawlines)
        self.rawLinesList: list[str] = rawlines
        self.lines:        str       = "".join(rawlines)
        self.linesList:    list[str] = []

#* PARSER CLASS
class CodeParser():
    
    def __init__(self, func: GhidraFunc) -> None:
        self.function: GhidraFunc = func
        self.parseLines()
        
    @staticmethod
    def repl(string: str, find: str, replace: str) -> str:
        """ Replaces all instances of 'find' substring with 'replace' substring in 'string' """
        result = ""
        start_index = 0
        while True:
            if (index := string.find(find, start_index)) == -1:
                result += string[start_index:]
                break
            result += string[start_index:index] + replace
            start_index = index + len(find)
        return result
        
        
    def parseLines(self):
        """ Parses lines using ';' as delimiter """
        pass
    
    def reduceIO(self) -> None:
        """ De-verbosifies std::cout & std::cin statements """
        for key, value in IO__.items():
            self.function.lines: str = self.repl(self.function.lines, key, value)
        print(self.function.lines)
        
    def rmTryComments(self) -> None:
        """ De-verbosifies std::cout & std::cin statements """
        pass
    
    def tabber(self) -> None:
        """ Changes double-spaces to tabs for unifrom & distinct tab pattern """
        pass
    
    def types(self) -> None:
        """ Changes double-spaces to tabs for unifrom & distinct tab pattern """
        pass
            
        
    @staticmethod
    def stripFormatting(line: str) -> str:
        """ Removes \n, \t, etc chars that affect parsing """
        ## Beware newline characters inside strings
        
    def export(self) -> None:
        try: 
            with open((expFile := (self.function.fileName[:-4] + "Demangled")), "w") as file:
                file.write(self.function.lines)
                
        except FileNotFoundError:
            print(f"[ERROR]: EXPORT TO {expFile} FAILED")


##### MAIN #####
def main() -> None:
    try:
        with open(FILENAME, "r") as file:
            contents: list[str] = file.readlines()
    except FileNotFoundError: 
        print("[ERROR]: File doesn't exist")
        
    #? [POSSIBLE]: Maybe I should store a copy of the original file incase the user wants to undo
    print("".join(contents), end="\n\n\n\n")
    parser = CodeParser(GhidraFunc(contents, FILENAME))
    
    parser.reduceIO()
    
"""
    # IDEAS FOR THIS PROGRAM

    # IDEAS FOR C4:
        * Rich Note-taking 
            ? Markdown Editor
            ? Pygmentize for C/C++ (Or Markdown Codeblocks :3)
            ? https://pypi.org/project/pervane/
    
"""
    


if __name__ == "__main__":
    main()