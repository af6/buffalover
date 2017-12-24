/*
Compilation: g++ -c lib.cc
Linking: g++ [YOUR G++] lib.o -I .
Example: g++ -c lib.cc; g++ bla.cc lib.o -I .;
*/
#include "lib.h";
int main() {
  writeMem(60,"54hpo56dhd"); // actually 59 bytes in. 
  writeMem(1,"abc"); // uses 1 instead of 0 to insure overflow. 
};
