/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Secured : delete hash table functions
*/
#include "../include/hashtable.h"

void delete_ll(hash_table_t *ht)
{
    hash_table_t *temp = NULL;

    while (ht->next != NULL){
        free(ht->data);
        temp = ht->next;
        free(ht);
        ht = temp;
    }
    return;
}

void delete_hashtable(hashtable_t *ht)
{
    if (ht == NULL || ht->len == -1)
        return;
    for (int i = 0; i < ht->len; i++){
        if (ht->table[i]->next != NULL){
            delete_ll(ht->table[i]);
        }
    }
    free(ht->table);
    ht->table = NULL;
    ht->hash_funct = NULL;
    ht->len = -1;
}
