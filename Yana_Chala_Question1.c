#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


extern char __executable_start;
extern char __etext, _edata, _end;


int main(void)
{
  int m;
  int k = 5;
  printf("    program text start (executable_start) 0x%lx\n", (unsigned long)&__executable_start);
  printf("    first address following program text end (etext) 0x%lx\n", (unsigned long)&__etext);
  printf("    initialized data (edata)  0x%lx\n",(unsigned long) &_edata);
  printf("    uninitialized data (end)  0x%lx\n", (unsigned long)&_end);
  char *pt;
  pt=(char*)malloc(10);
  printf("    address of heap start is %p.\n", pt);
  printf("    uninitialized data (end) after allocating memory 0x%lx\n", (unsigned long)sbrk(0));


  return 0;
}
