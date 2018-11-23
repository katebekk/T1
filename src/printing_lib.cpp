
#include <iostream>
#include "printing_lib.h"

void printContent(const char **content){
    int count = content [0][1];
    for (int i = 1; i <= count; i++){
        printf("%s\n", content[i]);
    }
}
