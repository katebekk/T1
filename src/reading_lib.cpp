//
// Created by polina on 18.11.18.
//

#include <iostream>
#include "reading_lib.h"


char **readFile(const char *filepath) {
    int len, count;
    std::cin >> len >> count;
    char **str = new char* [count];
    for (int i = 0; i < len; i++){
        str[i] = new char [len];
        std :: cin >> *str[i];
    }
    return str;

}