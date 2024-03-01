/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** Code which compare two strings.
*/
#include "../include/hashtable.h"

int my_strcmp(char const *s1, char const *s2)
{
    int str1_length = my_strlen(s1);
    int str2_length = my_strlen(s2);
    int i = 0;

    if (str1_length != str2_length) {
        return -1;
    }
    while (i < str1_length) {
        if (s1[i] != s2[i]) {
            return -1;
        }
        i++;
    }
    return 0;
}
