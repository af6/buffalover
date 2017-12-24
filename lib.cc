/*
Compilation: g++ -c lib.cc
Linking: g++ [YOUR G++] lib.o -I .
Example: g++ -c lib.cc; g++ bla.cc lib.o -I .;
*/
char i[1];
char j[16384];
void getMem(int bytes) {
    for (int k=0; k<bytes; k++) {
        j+=i[k]; // str reader
    }
}
void writeMem(int start,char bytes[4096]) {
    for (int k=start; k<start+sizeof(bytes); k++) {
        i[k] = bytes[k]; // basically a clone of strcpy
    }
}
