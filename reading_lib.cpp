#include <iostream>
#include "reading_lib.h"
#include <cstring>
#include <cstdio>

#define EMPTY NULL
using namespace std;
char **readFile(const char *filepath){
int len,count,i;
FILE *f = fopen("/home/igor/Документы/T11/assets/file_example.txt", "r");
if (f == EMPTY){
return nullptr  ;
}
fscanf(f, "%d\t%d\n", &len, &count);
   char **str = new char*[count+1];
   int N =sizeof(int)*2;
   str[0]= new char[N];
    ((int*) (*str))[0] = len;
    ((int*) (*str))[1] = count;
for (i = 1; i <= count; i++){
    str[i] = new char [len];
    fscanf(f, "%s", str[i]);
}
fclose(f);
return str;
}


