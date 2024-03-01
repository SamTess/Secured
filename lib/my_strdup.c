/*
** EPITECH PROJECT, 2023
** B-CPE-110
** File description:
** My_strdup
*/
#include "../include/hashtable.h"

char *my_strdup(char *str)
{
    int len = my_strlen(str) + 1;
    char *dup = malloc(len);

    dup = my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return (dup);
}
