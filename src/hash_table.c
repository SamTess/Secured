/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Secured : create hash table functions
*/
#include "../include/hashtable.h"
#include "../include/struct.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *res_hash = malloc(sizeof(hashtable_t));

    if (len <= 0 || hash == NULL) {
        return NULL;
    }
    res_hash->len = len;
    res_hash->hash_funct = hash;
    res_hash->table = malloc(sizeof(hash_table_t *) * len + 1);
    for (int i = 0; i < len; i++) {
        res_hash->table[i] = malloc(sizeof(hash_table_t));
        res_hash->table[i]->data = "\0";
        res_hash->table[i]->key = res_hash->len + 1;
        res_hash->table[i]->next = NULL;
    }
    return (res_hash);
}
