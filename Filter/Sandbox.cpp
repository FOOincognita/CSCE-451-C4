undefined8 main(void)

{
  basic_ostream *pbVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_8d;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int **local_70;
  basic_string local_68 [8];
  basic_string local_48 [10];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
                    /* try { // try from 00101cef to 00101d1c has its CatchHandler @ 0010204d */
  std::operator<<((basic_ostream *)std::cout,"Please enter dungeon map file: ");
  std::operator>>((basic_istream *)std::cin,local_68);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            (local_48);
                    /* try { // try from 00101d3a to 00101d3e has its CatchHandler @ 00102038 */
  local_70 = (int **)createMap((basic_string)local_48,&local_8c,&local_88,&local_84,&local_80);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_48);
  if (local_70 == (int **)0x0) {
                    /* try { // try from 00101d6a to 00101ff3 has its CatchHandler @ 0010204d */
    pbVar1 = std::operator<<((basic_ostream *)std::cout,
                             "This dungeon map does not exist.\nReturning you back to the real word,  adventurer!"
                            );
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar1,
               std::endl<char,std::char_traits<char>>);
    uVar2 = 1;
  }
  else {
    pbVar1 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::char_traits<char>> *)std::cout,
                        std::endl<char,std::char_traits<char>>);
    pbVar1 = std::operator<<(pbVar1,"---------------------------------------------------------\n");
    pbVar1 = std::operator<<(pbVar1,"Good day, adventurer! Your goal is to escape the dungeon!\n");
    pbVar1 = std::operator<<(pbVar1," --- SYMBOLS ---\n");
    pbVar1 = std::operator<<(pbVar1," o          : That is you, the adventurer!\n");
    pbVar1 = std::operator<<(pbVar1," x, -, |    : These are unpassable obstacles.\n");
    pbVar1 = std::operator<<(pbVar1," !          : That is the door to escape the dungeon.\n");
    pbVar1 = std::operator<<(pbVar1," --- CONTROLS ---\n");
    pbVar1 = std::operator<<(pbVar1," w, a, s, d : Keys for moving up, left, down, and right.\n");
    pbVar1 = std::operator<<(pbVar1," q          : Key for abandoning your quest.\n");
    pbVar1 = std::operator<<(pbVar1,"---------------------------------------------------------\n");
    std::basic_ostream<char,std::char_traits<char>>::operator<<
              ((basic_ostream<char,std::char_traits<char>> *)pbVar1,
               std::endl<char,std::char_traits<char>>);
    outputMap(local_70,local_8c,local_88);
    do {
      while( true ) {
        std::operator<<((basic_ostream *)std::cout,"Enter command (w,a,s,d: move, q: quit): ");
        std::operator>>((basic_istream *)std::cin,&local_8d);
        if (local_8d == 'q') {
          pbVar1 = std::operator<<((basic_ostream *)std::cout,"Thank you for playing!");
          std::basic_ostream<char,std::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::char_traits<char>> *)pbVar1,
                     std::endl<char,std::char_traits<char>>);
          goto LAB_00102000;
        }
        if ((((local_8d == 'w') || (local_8d == 'a')) || (local_8d == 's')) || (local_8d == 'd'))
        break;
        pbVar1 = std::operator<<((basic_ostream *)std::cout,
                                 "I did not understand your command, adventurer!");
        std::basic_ostream<char,std::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::char_traits<char>> *)pbVar1,
                   std::endl<char,std::char_traits<char>>);
      }
      local_74 = updateNextPosition(local_70,local_8c,local_88,local_8d,&local_84,&local_80,
                                    &local_7c,&local_78);
      if ((local_74 == 0) || (local_74 == 2)) {
        updateMap(local_70,&local_84,&local_80,&local_7c,&local_78);
      }
      outputMap(local_70,local_8c,local_88);
      outputStatus(local_74,local_84,local_80);
    } while (local_74 != 2);
LAB_00102000:
    deleteMap(local_70,local_8c);
    uVar2 = 0;
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}