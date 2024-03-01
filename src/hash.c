/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Secured : hash functions
*/
#include "../include/hashtable.h"

static int size_int(int nbr)
{
    int length = 0;

    while (nbr != 0) {
        nbr /= 10;
        length++;
    }
    if (length % 2 != 0)
        length += 1;
    return length;
}

static int convert_key(char *key)
{
    int total = 0;

    for (int i = 0; key[i] != '\0'; i++) {
        total += key[i] * key[i] * (i + 1);
    }
    return total;
}

static int hashing_func(int convert_key, int len, int count, int result)
{
    int temp = convert_key % 10;

    if (count < 3) {
        result += ((convert_key / 2) * (convert_key / 2))
            + (len / 2 * len / 2);
        result = result / ((size_int(result) / 2) - 2);
        result = result % 10000;
        count++;
        hashing_func(convert_key, len, count, result);
    }
    result = (result / 2) * (result / 2) + temp;
    return result;
}

int hash(char *key, int len)
{
    int converted_key = 0;
    int result = 0;

    if (len < 1 || key == NULL || my_strlen(key) == 0)
        return -1;
    converted_key = convert_key(key);
    result = hashing_func(converted_key, len, 0, 0);
    return result;
}
