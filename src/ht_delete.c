/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Secured : delete line functions
*/
#include "../include/hashtable.h"

static int search_in_ll(hash_table_t *ht, int key_hashed, int len)
{
    int found = 0;
    hash_table_t *prev = NULL;

    while (ht->next != NULL && found != 1){
        prev = ht;
        ht = ht->next;
        if (ht->key == key_hashed){
            prev->next = ht->next;
            found = 1;
        }
    }
    return (found);
}

void check_null_after(hashtable_t *ht, int len, int temp)
{
    if (ht->table[temp]->next == NULL) {
        ht->table[temp]->data = my_strdup("\0");
        ht->table[temp]->key = len + 1;
    } else {
        ht->table[temp] = ht->table[temp]->next;
    }
}

int ht_delete(hashtable_t *ht, char *key)
{
    int search = 0;
    int found = 0;
    int temp = 0;

    if (ht == NULL || ht->len == -1 || key == NULL
    || my_strlen(key) == 0)
        return 84;
    search = ht->hash_funct(key, ht->len);
    temp = search % ht->len;
    if (ht->table[temp]->key == search) {
        check_null_after(ht, ht->len, temp);
        return 0;
    }
    if (ht->table[temp]->next != NULL)
        found = search_in_ll(ht->table[temp], search, ht->len);
    if (found == 1)
        return (0);
    return 84;
}
