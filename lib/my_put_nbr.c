/*
** EPITECH PROJECT, 2023
** Libmy
** File description:
** my_put_nbr
*/
#include "include/my.h"

static void my_mb(int para)
{
    int reverse;

    if (para >= 10){
        reverse = para % 10;
        para = para / 10;
        my_put_nbr(para);
        my_putchar('0' + reverse);
    } else {
        my_putchar('0' + para % 10);
    }
}

static int negative(int para)
{
    if (para < 0){
        para = -para;
        my_putchar('-');
    }
    return (para);
}

int my_put_nbr(int nb)
{
    int para = nb;

    if (para != 0){
        para = negative(para);
        my_mb(para);
    } else {
        my_putchar('0');
    }
    return 0;
}
