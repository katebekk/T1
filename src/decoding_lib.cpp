
#include <iostream>
#include "decoding_lib.h"

/*
 * Меняет местами чётные и нечётные строки
 */
void decodeStep1(char **content){

    int count = ((int*)(*content))[1];
    for (int i = 2; i<=count; i+=2){
        std :: swap(content[i], content[i-1]);
    }
}

/*
 * Меняет местами чётные и нечётные столбцы
 */
void decodeStep2(char **content){

    int len = ((int*)(*content))[0], count = ((int*)(*content))[1];
    for (int i = 1; i < len; i+=2){
        for (int j = 1; j <= count; j++){
            std:: swap(content[j][i-1], content[j][i]);
        }
    }
}

/*
 * Заменяет каждый 3ий символ в каждой строке на каждый 7ой с конца
 */
void decodeStep3(char **content){

    int len = ((int*)(*content))[0], count = ((int*)(*content))[1];
    for (int i = 1; i <=count ; i++){
        int j = 2, k = len - 7;
        while ((j < len) && (k >= 0)){
            std:: swap(content[i][j], content[i][k]);
            j += 3;
            k -= 7;
        }
    }
}

/*
 * Заменяет каждый 2ий символ в каждом столбце на каждый 11ой с конца
 */
void decodeStep4(char **content){

    int len = ((int*)(*content))[0], count = ((int*)(*content))[1];
    for (int i = 0; i < len; i++){
        int j = 2, k = count - 11;
        while ((j <= count) && (k > 0)){
            std:: swap(content[j][i], content[k][i]);
            j += 2;
            k -= 11;
        }
    }
}

/*
 * Транспонирует массив строк(меняет строки и столбцы местами)
 */
/*void decodeStep5(char **content) {

    int len = ((int *) content)[0], count = ((int *) content)[1];
    int newlen = count, newcount = len;
    int n = sizeof(int) * 2;
    char **str = new char *[newcount + 1];
    str[0] = new char[n];
    ((int *) str)[0] = newlen;
    ((int *) str)[1] = newcount;

    for (int i = 1; i <= newcount; i++){
        str[i] = new char [newlen];
    }

    for (int i = 1; i <= newcount; i++){
        for (int j = 0; j < newlen; j++){
            str[i][j] = content[j+1][i-1];
        }
    }

    for (int i = 0; i <= count; i++){
        delete [] content[i];
    }
    delete[] content;

    content = new char* [newcount+1];
    content[0] = new char[n];
    ((int*)content)[0] = newlen;
    ((int*)content)[0] = newcount;
    for (int i = 1; i <= newcount; i++){
        content[i] = new char [newlen];
        content[i] = str[i];
    }

    for (int i = 0; i <= newcount; i++){
        delete [] str[i];
    }
    delete[] str;
}*/

/*
 * Инвертирует порядок символов в чётных строках
 */
void decodeStep6(char **content){

    int len = ((int*)(*content))[0], count = ((int*)(*content))[1];
    for (int i = 2; i <= count; i += 2){
        for (int j = 0, k = len - 1; j <= k; j++, k--){
            std:: swap(content[i][j], content[i][k]);
        }
    }
}

/*
 * Инвертирует порядок символов нечётных столбцов
 */
void decodeStep7(char **content){

    int len = ((int*)(*content))[0], count = ((int*)(*content))[1];
    for (int i = 0; i < len; i += 2){
        for (int j = 1, k = count; j <= k; j++, k--){
            std:: swap(content[j][i], content[k][i]);
        }
    }

}

/*
 * Смещает символы стоящие на чётных (i+j) вправо на 13 символов в таблице ASCII
 */
void decodeStep8(char **content){

    int len = ((int*)(*content))[0], count = ((int*)(*content))[1];
    for (int i = 1; i <= count; i++){
        for (int j = 0; j < len; j++){
            if ((i+j) % 2 == 0){
                content[i][j] = (char)((int) content[i][j] + 13);
            }
        }
    }
}

/*
 * Смещает символы стоящие на нечётных (i+j) влево на 5 символов в таблице ASCII
 */
void decodeStep9(char **content){

    int len = ((int*)(*content))[0], count = ((int*)(*content))[1];
    for (int i = 1; i <= count; i++){
        for (int j = 0; j < len; j++){
            if ((i+j) % 2 == 1){
                content[i][j] = (char)((int) content[i][j] - 5);
            }
        }
    }
}