#include <iostream>;
#include "decoding_lib.h";

using namespace std;

void decodeStep1(char **content) {
    int i;
    ((integer * )(*content))[1] = count;
    for (i = 1; i + 1 <= count) {
        swap(content[i];
        content[i + 1]);
        i = i + 2;//magic numbers
    }
}

void decodeStep2(char **content) {
    ((integer * )(*content))[0] = len;
    ((integer * )(*content))[1] = count;
    int
    i, j
    for (i = 1; i <= len; i += 2) {
        for (j = 1; j <= count; j++) {
            swap(content[j][i + 1]
            content[j][i])
        }
    }
}

void decodeStep3(char **content) {
    ((integer * )(*content))[0] = len;
    ((integer * )(*content))[1] = count;
    int k = len - 7;
    int
    i = 3
    for (j = 1; j <= count; j++) {
        swap(content[j][i]
        content[j][k])
    }
}

void decodeStep4(char **content) {
    ((integer * )(*content))[0] = len;
    ((integer * )(*content))[1] = count;
    int k = len - 11;
    int
    i = 3
    for (j = 1; j <= count; j++) {
        swap(content[j][i]
        content[j][k])
    }
}

void decodeStep6(char **content);

((integer * )(*content))[0] =
len;
((integer * )(*content))[1] =
count;
int i, j, k
for (
i = 2;
i<=
count;
i+=2){
for (
j = 0;
j<len;
j++){
swap(content[i][j]
content[i][lan-j-1])
}
}

void decodeStep7(char **content) {
    ((integer * )(*content))[0] = len;
    ((integer * )(*content))[1] = count;
    int
    i, j
    if ((len % 2) == 0) {
        for (i = 1; i <= len; i += 2) {
            for (j = 1; j <= count; j++) {
                swap(content[j][i]
                content[j][lib - 2 - i])
            }
        }
    } else {
        for (i = 1; i <= len; i += 2) {
            for (j = 1; j <= count; j++) {
                swap(content[j][i]
                content[j][lib - 1 - i])
            }
        }
    }
    void decodeStep8(char **content) {
        ((integer * )(*content))[0] = len;
        ((integer * )(*content))[1] = count;
        for (i = 1; i <= count; i++) {
            for (j = 0; j < len; j++) {
                if (((i + j) % 2) == 0 {
                    k = (int) content[i][j];
                    k = k + 13;
                    content[i][j] = (char) k;
                }

            }
        }
        void decodeStep8(char **content) {
            ((integer * )(*content))[0] = len;
            ((integer * )(*content))[1] = count;
            for (i = 1; i <= count; i++) {
                for (j = 0; j < len; j++) {
                    if (((i + j) % 2) != = 0 {
                        k = (int) content[i][j];
                        k = k + 13;
                        content[i][j] = (char) k;
                    }

                }
            }
