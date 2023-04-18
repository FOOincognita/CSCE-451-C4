#include "DungCrawl.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void) {
  (*(code*)(undefined*)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_ifstream<char,std::char_traits<char>>::close(void)

{
  close();
  return;
}



void __thiscall
std::basic_ifstream<char,std::char_traits<char>>::_basic_ifstream
          (basic_ifstream_char_std__char_traits_char__ *this)

{
  _basic_ifstream(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (basic_string *param_1)

{
  basic_string(param_1);
  return;
}



void __thiscall
std::basic_istream<char,std::char_traits<char>>::operator__
          (basic_istream_char_std__char_traits_char__ *this,int *param_1)

{
  operator__(this,param_1);
  return;
}



void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
          (basic_string_char_std__char_traits_char__std__allocator_char__ *this)

{
  _basic_string(this);
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

basic_ostream * std::operator__(basic_ostream *param_1,basic_string *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator__(param_1,param_2);
  return pbVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

basic_ostream * std::operator__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator__(param_1,param_2);
  return pbVar1;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator__
          (basic_ostream_char_std__char_traits_char__ *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  operator__(this,param_1);
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

basic_istream* std::operator__(basic_istream *param_1,basic_string *param_2)

{
  basic_istream *pbVar1;
  
  pbVar1 = operator__(param_1,param_2);
  return pbVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void operator_delete__(void *param_1)

{
  operator_delete__(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

basic_istream* std::operator__(basic_istream *param_1,char *param_2)

{
  basic_istream *pbVar1;
  
  pbVar1 = operator__(param_1,param_2);
  return pbVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (void)

{
  basic_string();
  return;
}



void __cxa_throw_bad_array_new_length(void)

{
  __cxa_throw_bad_array_new_length();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  Init(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_ifstream<char,std::char_traits<char>>::is_open(void)

{
  is_open();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_ifstream<char,std::char_traits<char>>::basic_ifstream
               (basic_string *param_1,_Ios_Openmode param_2)

{
  basic_ifstream(param_1,param_2);
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator__
          (basic_ostream_char_std__char_traits_char__ *this,int param_1)

{
  operator__(this,param_1);
  return;
}



void _Unwind_Resume(void)

{
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  __libc_start_main(main,unaff_retaddr,&stack0x00000008,0,0,param_3,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101323)
// WARNING: Removing unreachable block (ram,0x0010132f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101364)
// WARNING: Removing unreachable block (ram,0x00101370)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(&__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// deleteMap(int**, int)

void deleteMap(int **param_1,int param_2)

{
  int local_c;
  
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    if (param_1[local_c] != (int *)0x0) {
      operator_delete__(param_1[local_c]);
    }
  }
  if (param_1 != (int **)0x0) {
    operator_delete__(param_1);
  }
  return;
}



// outputMap(int**, int, int)

void outputMap(int **param_1,int param_2,int param_3)

{
  int iVar1;
  basic_ostream *pbVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  std::operator__((basic_ostream *)std::cout,"+");
  for (local_18 = 0; local_18 < param_2 * 3; local_18 = local_18 + 1) {
    std::operator__((basic_ostream *)std::cout,"-");
  }
  pbVar2 = std::operator__((basic_ostream *)std::cout,"+");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            ((basic_ostream_char_std__char_traits_char__ *)pbVar2,
             std::endl_char_std__char_traits_char__);
  for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 1) {
    std::operator__((basic_ostream *)std::cout,"|");
    for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
      iVar1 = param_1[local_10][local_14];
      if (iVar1 == 3) {
        std::operator__((basic_ostream *)std::cout," ! ");
      }
      else if (iVar1 < 4) {
        if (iVar1 == 2) {
          std::operator__((basic_ostream *)std::cout," x ");
        }
        else if (iVar1 < 3) {
          if (iVar1 == 0) {
            std::operator__((basic_ostream *)std::cout,"   ");
          }
          else if (iVar1 == 1) {
            std::operator__((basic_ostream *)std::cout," o ");
          }
        }
      }
    }
    pbVar2 = std::operator__((basic_ostream *)std::cout,"|");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              ((basic_ostream_char_std__char_traits_char__ *)pbVar2,
               std::endl_char_std__char_traits_char__);
  }
  std::operator__((basic_ostream *)std::cout,"+");
  for (local_c = 0; local_c < param_2 * 3; local_c = local_c + 1) {
    std::operator__((basic_ostream *)std::cout,"-");
  }
  pbVar2 = std::operator__((basic_ostream *)std::cout,"+");
  std::basic_ostream<char,std::char_traits<char>>::operator__
            ((basic_ostream_char_std__char_traits_char__ *)pbVar2,
             std::endl_char_std__char_traits_char__);
  return;
}



// outputStatus(int, int, int)

void outputStatus(int param_1,int param_2,int param_3)

{
  basic_ostream *pbVar1;
  
  if (param_1 == 2) {
    pbVar1 = std::operator__((basic_ostream *)std::cout,
                             "Congratulations, adventurer! You have escaped the dungeon!");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
               std::endl_char_std__char_traits_char__);
  }
  else if (param_1 < 3) {
    if (param_1 == 0) {
      pbVar1 = std::operator__((basic_ostream *)std::cout,"You have moved to location: (");
      pbVar1 = (basic_ostream *)
               std::basic_ostream<char,std::char_traits<char>>::operator__
                         ((basic_ostream_char_std__char_traits_char__ *)pbVar1,param_2);
      pbVar1 = std::operator__(pbVar1,", ");
      pbVar1 = (basic_ostream *)
               std::basic_ostream<char,std::char_traits<char>>::operator__
                         ((basic_ostream_char_std__char_traits_char__ *)pbVar1,param_3);
      pbVar1 = std::operator__(pbVar1,")");
      std::basic_ostream<char,std::char_traits<char>>::operator__
                ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
                 std::endl_char_std__char_traits_char__);
    }
    else if (param_1 == 1) {
      pbVar1 = std::operator__((basic_ostream *)std::cout,"An obstacle blocks your path.");
      std::basic_ostream<char,std::char_traits<char>>::operator__
                ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
                 std::endl_char_std__char_traits_char__);
    }
  }
  std::basic_ostream<char,std::char_traits<char>>::operator__
            ((basic_ostream_char_std__char_traits_char__ *)std::cout,
             std::endl_char_std__char_traits_char__);
  return;
}



// createMap(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int&,
// int&, int&, int&)

void * createMap(basic_string param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  basic_ostream *pbVar2;
  basic_istream_char_std__char_traits_char__ *pbVar3;
  void *pvVar4;
  void **unaff_RBX;
  void *pvVar5;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_23c;
  int local_238;
  int local_234;
  basic_string local_228 [130];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::basic_ifstream<char,std::char_traits<char>>::basic_ifstream(local_228,param_1);
                    // try { // try from 0010180a to 00101a3b has its CatchHandler @ 00101a66
  cVar1 = std::basic_ifstream<char,std::char_traits<char>>::is_open();
  if (cVar1 == '\x01') {
    pbVar3 = (basic_istream_char_std__char_traits_char__ *)
             std::basic_istream<char,std::char_traits<char>>::operator__
                       ((basic_istream_char_std__char_traits_char__ *)local_228,param_2);
    std::basic_istream<char,std::char_traits<char>>::operator__(pbVar3,param_3);
    pbVar3 = (basic_istream_char_std__char_traits_char__ *)
             std::basic_istream<char,std::char_traits<char>>::operator__
                       ((basic_istream_char_std__char_traits_char__ *)local_228,param_4);
    std::basic_istream<char,std::char_traits<char>>::operator__(pbVar3,param_5);
    if ((ulong)(long)*param_3 < 0x1000000000000000) {
      pvVar5 = operator_new__((long)*param_3 << 3);
    }
    else {
      pvVar5 = (void *)__cxa_throw_bad_array_new_length();
    }
    for (local_23c = 0; local_23c < *param_2; local_23c = local_23c + 1) {
      if ((ulong)(long)*param_2 < 0x1fffffffffffffff) {
        unaff_RBX = (void **)((long)local_23c * 8 + (long)pvVar5);
        pvVar4 = operator_new__((long)*param_2 << 2);
      }
      else {
        pvVar4 = (void *)__cxa_throw_bad_array_new_length();
      }
      *unaff_RBX = pvVar4;
    }
    for (local_238 = 0; local_238 < *param_2; local_238 = local_238 + 1) {
      for (local_234 = 0; local_234 < *param_3; local_234 = local_234 + 1) {
        std::basic_istream<char,std::char_traits<char>>::operator__
                  ((basic_istream_char_std__char_traits_char__ *)local_228,
                   (int *)(*(long *)((long)pvVar5 + (long)local_234 * 8) + (long)local_238 * 4));
      }
    }
    *(undefined4 *)((long)*param_5 * 4 + *(long *)((long)pvVar5 + (long)*param_4 * 8)) = 1;
    std::basic_ifstream<char,std::char_traits<char>>::close();
  }
  else {
    pbVar2 = std::operator__((basic_ostream *)std::cout,"ERROR: unable to open: ");
    pbVar2 = std::operator__(pbVar2,(basic_string *)CONCAT44(in_register_0000003c,param_1));
    std::basic_ostream<char,std::char_traits<char>>::operator__
              ((basic_ostream_char_std__char_traits_char__ *)pbVar2,
               std::endl_char_std__char_traits_char__);
    std::basic_ifstream<char,std::char_traits<char>>::close();
    pvVar5 = (void *)0x0;
  }
  std::basic_ifstream<char,std::char_traits<char>>::_basic_ifstream
            ((basic_ifstream_char_std__char_traits_char__ *)local_228);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return pvVar5;
}



// updateNextPosition(int**, int, int, char, int&, int&, int&, int&)

undefined8
updateNextPosition(int **param_1,int param_2,int param_3,char param_4,int *param_5,int *param_6,
                  int *param_7,int *param_8)

{
  undefined8 uVar1;
  
  *param_7 = *param_5;
  *param_8 = *param_6;
  if (param_4 == 'w') {
    *param_8 = *param_8 + -1;
  }
  else if (param_4 < 'x') {
    if (param_4 == 's') {
      *param_8 = *param_8 + 1;
    }
    else if (param_4 < 't') {
      if (param_4 == 'a') {
        *param_7 = *param_7 + -1;
      }
      else if (param_4 == 'd') {
        *param_7 = *param_7 + 1;
      }
    }
  }
  if ((((*param_7 < 0) || (param_2 <= *param_7)) || (*param_8 < 0)) ||
     ((param_3 <= *param_8 || (param_1[*param_7][*param_8] == 2)))) {
    *param_8 = *param_6;
    *param_7 = *param_5;
    uVar1 = 1;
  }
  else if (param_1[*param_7][*param_8] == 3) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// updateMap(int**, int&, int&, int&, int&)

void updateMap(int **param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  param_1[*param_2][*param_3] = 0;
  *param_2 = *param_4;
  *param_3 = *param_5;
  param_1[*param_4][*param_5] = 1;
  return;
}



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
                    // try { // try from 00101cef to 00101d1c has its CatchHandler @ 0010204d
  std::operator__((basic_ostream *)std::cout,"Please enter dungeon map file: ");
  std::operator__((basic_istream *)std::cin,local_68);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            (local_48);
                    // try { // try from 00101d3a to 00101d3e has its CatchHandler @ 00102038
  local_70 = (int **)createMap((basic_string)local_48,&local_8c,&local_88,&local_84,&local_80);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
  if (local_70 == (int **)0x0) {
                    // try { // try from 00101d6a to 00101ff3 has its CatchHandler @ 0010204d
    pbVar1 = std::operator__((basic_ostream *)std::cout,
                             "This dungeon map does not exist.\nReturning you back to the real word, adventurer!"
                            );
    std::basic_ostream<char,std::char_traits<char>>::operator__
              ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
               std::endl_char_std__char_traits_char__);
    uVar2 = 1;
  }
  else {
    pbVar1 = (basic_ostream *)
             std::basic_ostream<char,std::char_traits<char>>::operator__
                       ((basic_ostream_char_std__char_traits_char__ *)std::cout,
                        std::endl_char_std__char_traits_char__);
    pbVar1 = std::operator__(pbVar1,"---------------------------------------------------------\n");
    pbVar1 = std::operator__(pbVar1,"Good day, adventurer! Your goal is to escape the dungeon!\n");
    pbVar1 = std::operator__(pbVar1," --- SYMBOLS ---\n");
    pbVar1 = std::operator__(pbVar1," o          : That is you, the adventurer!\n");
    pbVar1 = std::operator__(pbVar1," x, -, |    : These are unpassable obstacles.\n");
    pbVar1 = std::operator__(pbVar1," !          : That is the door to escape the dungeon.\n");
    pbVar1 = std::operator__(pbVar1," --- CONTROLS ---\n");
    pbVar1 = std::operator__(pbVar1," w, a, s, d : Keys for moving up, left, down, and right.\n");
    pbVar1 = std::operator__(pbVar1," q          : Key for abandoning your quest.\n");
    pbVar1 = std::operator__(pbVar1,"---------------------------------------------------------\n");
    std::basic_ostream<char,std::char_traits<char>>::operator__
              ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
               std::endl_char_std__char_traits_char__);
    outputMap(local_70,local_8c,local_88);
    do {
      while( true ) {
        std::operator__((basic_ostream *)std::cout,"Enter command (w,a,s,d: move, q: quit): ");
        std::operator__((basic_istream *)std::cin,&local_8d);
        if (local_8d == 'q') {
          pbVar1 = std::operator__((basic_ostream *)std::cout,"Thank you for playing!");
          std::basic_ostream<char,std::char_traits<char>>::operator__
                    ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
                     std::endl_char_std__char_traits_char__);
          goto LAB_00102000;
        }
        if ((((local_8d == 'w') || (local_8d == 'a')) || (local_8d == 's')) || (local_8d == 'd'))
        break;
        pbVar1 = std::operator__((basic_ostream *)std::cout,
                                 "I did not understand your command, adventurer!");
        std::basic_ostream<char,std::char_traits<char>>::operator__
                  ((basic_ostream_char_std__char_traits_char__ *)pbVar1,
                   std::endl_char_std__char_traits_char__);
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
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// deleteMap(int**, int)

void _GLOBAL__sub_I_deleteMap(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



void _fini(void)

{
  return;
}


