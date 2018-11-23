
#include <cstring>
#include <cstdio>
#include "reading_lib.h"


char **readFile(const char *filepath) {
    int len, count;
    FILE *f = fopen(filepath, "r");
    if (f != NULL){
        fscanf(f, "%d\t%d\n", &len, &count);
        char **str = new char* [count];
        str[0] = new char [len];
        str[0][0] = (char) len; //давайте надеяться
        str[0][1] = (char) count; //что оно туда поместится
        for (int i = 1; i <= count; i++){
            str[i] = new char [len];
            fscanf(f, "%s", str[i]);
        }
        fclose(f);
        return str;
    }
    return nullptr;
}