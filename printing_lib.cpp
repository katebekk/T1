#include "reading_lib.h"
#include <iostream>
#include <cstdio>
using namespace std;
void printContent(const char **content){
    int i,count;
    ((int*) (*content))[1] = count;
    for(i= 1; i<=count;i++){
    printf("%s\n",content[i]);}

}

