/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Secured : struct header
*/

#ifndef MY_STRUCT
    #define MY_STRUCT
    #include "hashtable.h"
typedef struct hast_table_s {
    int key;
    char *data;
    struct hast_table_s *next;
}hash_table_t;
typedef struct hashtable_s {
    int len;
    int (*hash_funct)(char *, int);
    hash_table_t **table;
}hashtable_t;

#endif /* !MY_STRUCT */
