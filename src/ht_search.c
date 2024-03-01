/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Secured : search line functions
*/
#include "../include/hashtable.h"

static char *search_in_ll(hash_table_t *ht, int key_hashed)
{
    while (ht->next != NULL){
        if (ht->key == key_hashed){
            return ht->data;
        }
        ht = ht->next;
    }
    return "\0";
}

char *ht_search(hashtable_t *ht, char *key)
{
    int search = 0;
    char *result = "\0";

    if (ht == NULL || ht->len == -1 || key == NULL
    || my_strlen(key) == 0)
        return "\0";
    search = ht->hash_funct(key, ht->len);
    for (int i = 0; i < ht->len; i++){
        if (ht->table[i]->key == search){
            return ht->table[i]->data;
        }
        if (ht->table[i]->next != NULL) {
            result = my_strdup(search_in_ll(ht->table[i], search));
        }
        if (my_strcmp(result, "\0") != 0) {
            return result;
        }
    }
    return "\0";
}
