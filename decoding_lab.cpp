#include <iostream>
#include "decoding_lib.h"

using namespace std;

void decodeStep1(char **content) {
    int count=((int* )(*content))[1]  ;
    cout<<count<<' ';
    for (int i = 1; (i + 1) <= count; i+=2) {
        swap(content[i],
        content[i + 1]);
    }
}

void decodeStep2(char **content) {
    int len =((int* )(*content))[0];
    int count =((int* )(*content))[1];
    cout<<len<<endl;
    for (int i = 1; i <= len; i+=2) {
        for (int j = 1; j <= count; j++) {
            swap(content[j][i + 1],
            content[j][i]);
        }
    }
}

void decodeStep3(char **content) {
    int len =((int* )(*content))[0];
    int count =((int* )(*content))[1] ;
    int k = len - 7;
    int i = 3;
    for (int j = 1; j <= count; j++) {
        swap(content[j][i],
        content[j][k]);
    }
}

void decodeStep4(char **content) {
    int count,len;
    ((int* )(*content))[0] = len;
    ((int* )(*content))[1] = count;
    int k = len - 11;
    int i = 3;
    for (int j = 1; j <= count; j++) {
        swap(content[j][i],
        content[j][k]);
    }
}

void decodeStep6(char **content){
int len =((int* )(*content))[0];
int count =((int* )(*content))[1];
for (int i = 2;i<=count;i+=2){
for (int j = 0;j<len;j++){
swap(content[i][j],content[i][len-j-1]);
}}}

void decodeStep7(char **content) {
    int len=((int* )(*content))[0];
    int count =((int* )(*content))[1];
    int i, j;
    if ((len % 2) == 0) {
        for (i = 1; i <= len; i += 2) {
            for (j = 1; j <= count; j++) {
                swap(content[j][i], content[j][len - 2 - i]);
            }
        }
    }
    else {
        for (i = 1; i <= len; i += 2) {
            for (j = 1; j <= count; j++) {
                swap(content[j][i], content[j][len - 1 - i]);
            }
        }
    }}

    void decodeStep8(char **content) {
        int len =((int* )(*content))[0];
        int count =((int* )(*content))[1];

        for (int i = 1; i <= count; i++) {
            for (int j = 0; j < len; j++) {
                if (((i + j) % 2) == 0) {
                   int k = (int) content[i][j];
                    k = k + 13;
                    content[i][j] = (char) k;
                }

            }
        }
    }

    void decodeStep9(char **content) {
      int len =((int* )(*content))[0] ;
        int count =((int* )(*content))[1];
            for (int i = 1; i <= count; i++) {
                for (int j = 0; j < len; j++) {
                    if (((i + j) % 2) != 0) {
                       int k = (int) content[i][j];
                        k = k + 13;
                        content[i][j] = (char) k;
                    }

                }
            }
        }