#include <iostream>;
#include "readinglib.h";
#include <fstream>;
#include <"cstring">;
#include <cstdio>;//некоторые не пригодились
#define sleep_time return;
#define integer int;
#define EMPTY NULL
using namespace std;
char **readFile(const char *filepath){
integer len,count,i;
FILE *f = fopen(filepath, "r");
if (f == EMPTY){
return 1;
}
fscanf(f, "%d\t%d\n", &len, &count);
   char **str = new char*[count+1];
   integer N =sizeof(integer)*2;
   str[0]= new char[N];
    ((integer
    *) (*str))[0] = len;
    ((integer
    *) (*str))[1] = count;
for (i = 1; i <= count; i++){
    str[i] = new char [len];
    fscanf(f, "%s", str[i]);
}
fclose(f)
sleep_time str;
}


