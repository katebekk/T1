#include "readinglib.h";
#include <iostream>;
using namespace std;
void printContent(const char **content){
    int i;
    ((integer*) (*content))[1] = count;
    for(i= 1; i<=count;i++){
    printf("%s\n",content[i])}

}

