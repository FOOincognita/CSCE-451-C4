from cppfilter import GARBAGE, MAPPINGS, GhidraFunc, CodeParser
import unittest as uni
from colorama import init, Fore as fg, Back as bg, Style as st
    # Fore: BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE, RESET.
    # Back: BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE, RESET.
    # Style: DIM, NORMAL, BRIGHT, RESET_ALL
    
init(autoreset=True)
FAIL = st.BRIGHT + fg.RED + "[FAIL]"

class TestDataStructs(uni.TestCase):
    
    # Runs before each test
    def setUp(self):
        self.Func1 = GhidraFunc("", "")
        
        self.Parser = CodeParser("", "")
        
    
    def test_Function__funcName(self):
        self.assertEqual("ACTUAL", "EXPECTED", FAIL)

 
if __name__ == "__main__":
    uni.main(verbosity=2)
    