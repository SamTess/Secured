/*
** EPITECH PROJECT, 2023
** my_strcpy
** File description:
** Code which copies a string into another
*/
#include "../include/hashtable.h"

char *my_strcpy(char *dest, char const *src)
{
    int length = my_strlen(src);
    int length2 = 0;

    while (length2 < length) {
        dest[length2] = src[length2];
        length2++;
    }
    dest[length] = '\0';
    return (dest);
}
