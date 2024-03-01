/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Test Secured : main tests
*/

#include <criterion/criterion.h>
#include "../include/hashtable.h"

//?----------------------- LENGTH ----------------------//

int const len_11 = 3;
int const len_21 = 5;
int const len_31 = 7;
int const len_41 = 9;
int const len_51 = 15;

//*----------------------- TEST ----------------------//

Test(create_hastable, is_hastable_correctly_init_1)
{
    hashtable_t *ht = new_hashtable(&hash, len_11);

    cr_assert_eq(ht->len, len_11, "Length mismatch");
    cr_assert(ht->hash_funct == &hash, "Hash function mismatch");
    for (int i = 0; i < len_11; i++) {
        cr_assert(my_strcmp(ht->table[i]->data, "\0") == 0);
        cr_assert(ht->table[i]->next == NULL);
        cr_assert(ht->table[i]->key == len_11 + 1);
    }
}

Test(create_hastable, is_hastable_uncorrectly_init)
{
    hashtable_t *ht = new_hashtable(&hash, -5);

    cr_assert(ht == NULL, "Isn't null");
}

Test(create_hastable, is_hastable_correctly_init_2)
{
    hashtable_t *ht = new_hashtable(&hash, len_21);

    cr_assert_eq(ht->len, len_21, "Length mismatch");
    cr_assert(ht->hash_funct == &hash, "Hash function mismatch");
    for (int i = 0; i < len_21; i++) {
        cr_assert(my_strcmp(ht->table[i]->data, "\0") == 0);
        cr_assert(ht->table[i]->next == NULL);
        cr_assert(ht->table[i]->key == len_21 + 1);
    }
}

Test(create_hastable, is_hastable_uncorrectly_init_2)
{
    hashtable_t *ht = new_hashtable(&hash, 0);

    cr_assert(ht == NULL, "Isn't null");
}

Test(create_hastable, is_hastable_correctly_init_3)
{
    hashtable_t *ht = new_hashtable(&hash, len_31);

    cr_assert_eq(ht->len, len_31, "Length mismatch");
    cr_assert(ht->hash_funct == &hash, "Hash function mismatch");
    for (int i = 0; i < len_31; i++) {
        cr_assert(my_strcmp(ht->table[i]->data, "\0") == 0);
        cr_assert(ht->table[i]->next == NULL);
        cr_assert(ht->table[i]->key == len_31 + 1);
    }
}

Test(create_hastable, is_hastable_correctly_init_5)
{
    hashtable_t *ht = new_hashtable(&hash, len_41);

    cr_assert_eq(ht->len, len_41, "Length mismatch");
    cr_assert(ht->hash_funct == &hash, "Hash function mismatch");
    for (int i = 0; i < len_41; i++) {
        cr_assert(my_strcmp(ht->table[i]->data, "\0") == 0);
        cr_assert(ht->table[i]->next == NULL);
        cr_assert(ht->table[i]->key == len_41 + 1);
    }
}

Test(create_hastable, is_hastable_correctly_init_4)
{
    hashtable_t *ht = new_hashtable(&hash, len_51);

    cr_assert_eq(ht->len, len_51, "Length mismatch");
    cr_assert(ht->hash_funct == &hash, "Hash function mismatch");
    for (int i = 0; i < len_51; i++) {
        cr_assert(my_strcmp(ht->table[i]->data, "\0") == 0);
        cr_assert(ht->table[i]->next == NULL);
        cr_assert(ht->table[i]->key == len_51 + 1);
    }
}