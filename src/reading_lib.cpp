//
// Created by DELL on 07.12.2018.
//

#include "reading_lib.h"
#include <fstream>
char **readFile(const char *filepath) {
    ifstream file (filepath);
    int m, n;
    file >> m >> n;
    char **bl = new char* [n+1];
    ((int*)(*bl))[0] = m;
    ((int*)(*bl))[1] = n;
    for (int i=1; i <= n; i++) {
        bl[i] = new  char [m];
        file.get(bl[i], m);
    }
    file.close();
}