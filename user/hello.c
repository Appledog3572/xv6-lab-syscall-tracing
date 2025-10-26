#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"
      
int main(int argc, char *argv[]) { 
  printf("hello! your name is %s\n",argv[1]); 
  exit(0); 
} 