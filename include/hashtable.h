/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Secured
** File description:
** hashtable.h
*/

#ifndef HASHTABLE_H
    #define HASHTABLE_H
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <errno.h>
    #include <fcntl.h>
    #include "struct.h"
    #include <stdio.h>

int mini_printf(char const *format, ...);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strdup(char *str);
char *my_strcpy(char *dest, char const *src);
int hash(char *key, int len);
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);
void check_null_after(hashtable_t *ht, int len, int temp);
int my_strcmp(char const *s1, char const *s2);

#endif /* HASHTABLE_H */
