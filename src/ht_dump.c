/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Secured : dump hash table functions
*/
#include "../include/hashtable.h"

void display_ll(hash_table_t *ht, int len)
{
    hash_table_t *current = ht->next;

    while (current != NULL && current->key != len + 1){
        mini_printf("> %d - %s\n", current->key, current->data);
        current = current->next;
    }
}

void displaying(hash_table_t *ht, int i, int len)
{
    if (ht->key == len + 1){
        mini_printf("[%d]:\n", i);
    } else {
        mini_printf("[%d]:\n> %d - %s\n", i, ht->key, ht->data);
        if (ht->next != NULL){
            display_ll(ht, len);
        }
    }
}

void ht_dump(hashtable_t *ht)
{
    if (ht == NULL || ht->len == -1)
        return;
    for (int i = 0; i < ht->len; i++){
        displaying(ht->table[i], i, ht->len);
    }
}
