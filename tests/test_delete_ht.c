/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Test Secured : main tests
*/

#include <criterion/criterion.h>
#include "../include/hashtable.h"

//?----------------------- KEY ----------------------//

char *key_10 = "1a1A";
char *key_20 = "2b2B";
char *key_30 = "3c3C";
char *key_40 = "1A1a";
char *key_50 = "2B2b";
char *key_60 = "3C3c";
char *key_70 = "11aA";
char *key_80 = "22bB";
char *key_90 = "aA11";
char *key_00 = "bB22";

//?----------------------- DATA ----------------------//

char *data_10 = "Data_CPE_110";
char *data_20 = "Data_PSU_100";
char *data_30 = "Data_MUL_100";
char *data_40 = "Data_NSA_100";
char *data_50 = "Data_PERSO";
char *data_60 = "Data_CPE_100";
char *data_70 = "Data_CPE_101";
char *data_80 = "Data_CPE_200";
char *data_90 = "Data_PSU_200";
char *data_00 = "Data_MUL_200";

//?----------------------- LENGTH ----------------------//

int len_10 = 3;
int len_20 = 5;
int len_30 = 7;
int len_40 = 9;
int len_50 = 15;

//*----------------------- TEST ----------------------//


Test(delete_hastable, is_hastable_correctly_delete_empty_1)
{
    hashtable_t *ht = new_hashtable(&hash, len_10);

    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_null_1)
{
    hashtable_t *ht = new_hashtable(&hash, len_10);

    delete_hashtable(ht);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_empty_2)
{
    hashtable_t *ht = new_hashtable(&hash, len_20);

    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_null_2)
{
    hashtable_t *ht = new_hashtable(&hash, len_20);

    delete_hashtable(ht);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_empty_3)
{
    hashtable_t *ht = new_hashtable(&hash, len_30);

    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_null_3)
{
    hashtable_t *ht = new_hashtable(&hash, len_30);

    delete_hashtable(ht);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_empty_4)
{
    hashtable_t *ht = new_hashtable(&hash, len_40);

    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_null_4)
{
    hashtable_t *ht = new_hashtable(&hash, len_40);

    delete_hashtable(ht);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_empty_5)
{
    hashtable_t *ht = new_hashtable(&hash, len_50);

    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_null_5)
{
    hashtable_t *ht = new_hashtable(&hash, len_50);

    delete_hashtable(ht);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_1)
{
    hashtable_t *ht = new_hashtable(&hash, len_10);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_1_hard)
{
    hashtable_t *ht = new_hashtable(&hash, len_10);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    ht = new_hashtable(&hash, len_10);
    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_2)
{
    hashtable_t *ht = new_hashtable(&hash, len_20);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_2_hard)
{
    hashtable_t *ht = new_hashtable(&hash, len_20);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    ht = new_hashtable(&hash, len_20);
    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_3)
{
    hashtable_t *ht = new_hashtable(&hash, len_30);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_3_hard)
{
    hashtable_t *ht = new_hashtable(&hash, len_30);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    ht = new_hashtable(&hash, len_30);
    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_4)
{
    hashtable_t *ht = new_hashtable(&hash, len_40);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_4_hard)
{
    hashtable_t *ht = new_hashtable(&hash, len_40);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    ht = new_hashtable(&hash, len_40);
    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_5)
{
    hashtable_t *ht = new_hashtable(&hash, len_50);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}

Test(delete_hastable, is_hastable_correctly_delete_5_hard)
{
    hashtable_t *ht = new_hashtable(&hash, len_50);

    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    ht = new_hashtable(&hash, len_50);
    ht_insert(ht, key_10, data_10);
    ht_insert(ht, key_20, data_20);
    ht_insert(ht, key_30, data_30);
    ht_insert(ht, key_40, data_40);
    ht_insert(ht, key_50, data_50);
    ht_insert(ht, key_60, data_60);
    ht_insert(ht, key_70, data_70);
    ht_insert(ht, key_80, data_80);
    ht_insert(ht, key_90, data_90);
    ht_insert(ht, key_00, data_00);
    delete_hashtable(ht);
    cr_assert(ht->table == NULL, "Table not NULL");
    cr_assert(ht->hash_funct == NULL, "Hash function not NULL");
    cr_assert(ht->len == -1, "Length mismatch");
}