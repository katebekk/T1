
#include <iostream>
#include "decoding_lib.h"

/*
 * Меняет местами чётные и нечётные строки
 */
void decodeStep1(char **content){

    int count = ((int*)content)[1];
    for (int i = 2; i<=count; i+=2){
        std :: swap(content[i], content[i-1]);
    }
}

/*
 * Меняет местами чётные и нечётные столбцы
 */
void decodeStep2(char **content){

    int len = ((int*)content)[0], count = ((int*)content)[1];
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

}

/*
 * Заменяет каждый 2ий символ в каждом столбце на каждый 11ой с конца
 */
void decodeStep4(char **content);

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

    for (int i = 1; i <= newcount; i++) {
        str[i] = new char[newlen];

        for (int j = 0; j < newlen; j++) {
            str[i][j] = content[j][i]; //падает на первой итерации
        }
    }

    content = str;
    for (int i = 0; i <= newcount; i++){
        delete str[i];
    }
    delete[] str;
}*/

/*
 * Инвертирует порядок символов в чётных строках
 */
void decodeStep6(char **content);

/*
 * Инвертирует порядок символов нечётных столбцов
 */
void decodeStep7(char **content);

/*
 * Смещает символы стоящие на чётных (i+j) вправо на 13 символов в таблице ASCII
 */
void decodeStep8(char **content);

/*
 * Смещает символы стоящие на нечётных (i+j) влево на 5 символов в таблице ASCII
 */
void decodeStep9(char **content);