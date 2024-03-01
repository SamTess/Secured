/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Test Secured : main tests
*/

#include <criterion/criterion.h>
#include "../include/hashtable.h"

//?----------------------- KEY ----------------------//

char *key_13 = "1a1A";
char *key_23 = "2b2B";
char *key_33 = "3c3C";
char *key_43 = "1A1a";
char *key_53 = "2B2b";
char *key_63 = "3C3c";
char *key_73 = "11aA";
char *key_83 = "22bB";
char *key_93 = "aA11";
char *key_03 = "bB22";

//?----------------------- DATA ----------------------//

char *data_13 = "Data_CPE_110";
char *data_23 = "Data_PSU_100";
char *data_33 = "Data_MUL_100";
char *data_43 = "Data_NSA_100";
char *data_53 = "Data_PERSO";
char *data_63 = "Data_CPE_100";
char *data_73 = "Data_CPE_101";
char *data_83 = "Data_CPE_200";
char *data_93 = "Data_PSU_200";
char *data_03 = "Data_MUL_200";

//?----------------------- LENGTH ----------------------//

int const len_13 = 3;
int const len_23 = 5;
int const len_33 = 7;
int const len_43 = 9;
int const len_53 = 15;

//*----------------------- TEST ----------------------//

Test(ht_delete, delete_single_data)
{
    hashtable_t *ht = new_hashtable(&hash, len_33);

    ht_insert(ht, key_13, data_13);
    ht_insert(ht, key_23, data_23);
    ht_insert(ht, key_33, data_33);
    ht_insert(ht, key_43, data_43);
    ht_insert(ht, key_53, data_53);
    ht_insert(ht, key_63, data_63);
    ht_insert(ht, key_73, data_73);
    ht_insert(ht, key_83, data_83);
    ht_insert(ht, key_93, data_93);
    ht_insert(ht, key_03, data_03);
    ht_delete(ht, key_23);
}

Test(ht_delete, delete_multiple_data)
{
    hashtable_t *ht = new_hashtable(&hash, len_33);

    ht_insert(ht, key_13, data_13);
    ht_insert(ht, key_23, data_23);
    ht_insert(ht, key_33, data_33);
    ht_insert(ht, key_43, data_43);
    ht_insert(ht, key_53, data_53);
    ht_insert(ht, key_63, data_63);
    ht_insert(ht, key_73, data_73);
    ht_insert(ht, key_83, data_83);
    ht_insert(ht, key_93, data_93);
    ht_insert(ht, key_03, data_03);
    ht_delete(ht, key_23);
    ht_delete(ht, key_63);
    ht_delete(ht, key_03);
    ht_delete(ht, key_93);
}

Test(ht_delete, delete_incorrect_data)
{
    hashtable_t *ht = new_hashtable(&hash, len_33);

    ht_insert(ht, key_13, data_13);
    ht_insert(ht, key_23, data_23);
    ht_insert(ht, key_33, data_33);
    ht_insert(ht, key_43, data_43);
    ht_insert(ht, key_53, data_53);
    ht_insert(ht, key_63, data_63);
    ht_insert(ht, key_73, data_73);
    ht_insert(ht, key_83, data_83);
    ht_insert(ht, key_93, data_93);
    ht_insert(ht, key_03, data_03);
    ht_delete(ht, "Bonjour");
}

Test(ht_delete, delete_null_data)
{
    hashtable_t *ht = new_hashtable(&hash, len_33);

    ht_insert(ht, key_13, data_13);
    ht_insert(ht, key_23, data_23);
    ht_insert(ht, key_33, data_33);
    ht_insert(ht, key_43, data_43);
    ht_insert(ht, key_53, data_53);
    ht_insert(ht, key_63, data_63);
    ht_insert(ht, key_73, data_73);
    ht_insert(ht, key_83, data_83);
    ht_insert(ht, key_93, data_93);
    ht_insert(ht, key_03, data_03);
    ht_delete(ht, "");
}

Test(ht_delete, delete_all_data)
{
    hashtable_t *ht = new_hashtable(&hash, len_33);

    ht_insert(ht, key_13, data_13);
    ht_insert(ht, key_23, data_23);
    ht_insert(ht, key_33, data_33);
    ht_insert(ht, key_43, data_43);
    ht_insert(ht, key_53, data_53);
    ht_insert(ht, key_63, data_63);
    ht_insert(ht, key_73, data_73);
    ht_insert(ht, key_83, data_83);
    ht_insert(ht, key_93, data_93);
    ht_insert(ht, key_03, data_03);
    ht_delete(ht, key_13);
    ht_delete(ht, key_93);
    ht_delete(ht, key_03);
    ht_delete(ht, key_23);
    ht_delete(ht, key_33);
    ht_delete(ht, key_43);
    ht_delete(ht, key_53);
    ht_delete(ht, key_63);
    ht_delete(ht, key_73);
    ht_delete(ht, key_83);
}

Test(ht_delete, delete_null_table)
{
    hashtable_t *ht = new_hashtable(&hash, len_33);

    delete_hashtable(ht);
    ht_delete(ht, key_03);
}

Test(ht_delete, delete_next_null)
{
    hashtable_t *ht = new_hashtable(&hash, len_33);

    ht->table[0]->data = "Bonj";
    ht->table[0]->key = 455;
    ht->table[0]->next = NULL;
    ht_insert(ht, key_23, data_13);
    ht_delete(ht, key_23);
    check_null_after(ht, len_33, 0);
    cr_assert_str_eq(ht->table[0]->data, "\0", "wrong data");
    cr_assert(ht->table[0]->key == len_33 + 1);
}