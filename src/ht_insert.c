/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Secured : insert line functions
*/
#include "../include/hashtable.h"

static int search_in_link_list(hash_table_t *ht, int temp, char *value)
{
    while (ht->next != NULL) {
        if (ht->key == temp) {
            ht->data = my_strdup(value);
            return 0;
        }
        ht = ht->next;
    }
    return 84;
}

static int check_same_key(hashtable_t *ht, char *key, char *value)
{
    int temp = ht->hash_funct(key, ht->len);
    int result = 4;
    int pos = temp % ht->len;

    if (ht->table[pos]->key == temp) {
        ht->table[pos]->data = my_strdup(value);
        return 0;
    }
    if (ht->table[pos]->next != NULL){
        result = search_in_link_list(ht->table[pos], temp, value);
    }
    if (result == 0) {
        return 0;
    }
    return 84;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int temp = 0;
    int key_hashed = 0;
    hash_table_t *new_node;

    if (ht == NULL || ht->len == -1 || key == NULL
    || value == NULL || my_strlen(value) == 0
    || my_strlen(key) == 0)
        return 84;
    if (check_same_key(ht, key, value) == 0)
        return 0;
    temp = ht->hash_funct(key, ht->len);
    temp = temp % ht->len;
    key_hashed = ht->hash_funct(key, ht->len);
    new_node = malloc(sizeof(hash_table_t));
    new_node->data = my_strdup(value);
    new_node->key = key_hashed;
    new_node->next = ht->table[temp];
    ht->table[temp] = new_node;
    return 0;
}
