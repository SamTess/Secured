/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Test Secured : main tests
*/

#include <criterion/criterion.h>
#include "../include/hashtable.h"

//?----------------------- KEY ----------------------//

char *key_15 = "1a1A";
char *key_25 = "2b2B";
char *key_35 = "3c3C";
char *key_45 = "1A1a";
char *key_55 = "2B2b";
char *key_65 = "3C3c";
char *key_75 = "11aA";
char *key_85 = "22bB";
char *key_95 = "aA11";
char *key_05 = "bB22";

//?----------------------- DATA ----------------------//

char *data_15 = "Data_CPE_110";
char *data_25 = "Data_PSU_100";
char *data_35 = "Data_MUL_100";
char *data_45 = "Data_NSA_100";
char *data_55 = "Data_PERSO";
char *data_65 = "Data_CPE_100";
char *data_75 = "Data_CPE_101";
char *data_85 = "Data_CPE_200";
char *data_95 = "Data_PSU_200";
char *data_05 = "Data_MUL_200";

//?----------------------- LENGTH ----------------------//

int const len_15 = 3;
int const len_25 = 5;
int const len_35 = 7;
int const len_45 = 9;
int const len_55 = 15;

//*----------------------- TEST ----------------------//

Test(ht_insert, insert_classic)
{
    hashtable_t *ht = new_hashtable(&hash, len_35);

    ht_insert(ht, key_15, data_15);
}

Test(ht_insert, insert_classic_multiple)
{
    hashtable_t *ht = new_hashtable(&hash, len_35);

    ht_insert(ht, key_15, data_15);
    ht_insert(ht, key_25, data_25);
    ht_insert(ht, key_35, data_35);
    ht_insert(ht, key_45, data_45);
    ht_insert(ht, key_55, data_55);
    ht_insert(ht, key_65, data_65);
    ht_insert(ht, key_75, data_75);
    ht_insert(ht, key_85, data_85);
    ht_insert(ht, key_95, data_95);
    ht_insert(ht, key_05, data_05);
}

Test(ht_insert, insert_low_table)
{
    hashtable_t *ht = new_hashtable(&hash, len_15);

    ht_insert(ht, key_15, data_15);
    ht_insert(ht, key_25, data_25);
    ht_insert(ht, key_35, data_35);
    ht_insert(ht, key_45, data_45);
    ht_insert(ht, key_55, data_55);
    ht_insert(ht, key_65, data_65);
    ht_insert(ht, key_75, data_75);
    ht_insert(ht, key_85, data_85);
    ht_insert(ht, key_95, data_95);
    ht_insert(ht, key_05, data_05);
}

Test(ht_insert, insert_all_key_twice)
{
    hashtable_t *ht = new_hashtable(&hash, len_35);

    ht_insert(ht, key_15, data_15);
    ht_insert(ht, key_25, data_25);
    ht_insert(ht, key_35, data_35);
    ht_insert(ht, key_45, data_45);
    ht_insert(ht, key_55, data_55);
    ht_insert(ht, key_65, data_65);
    ht_insert(ht, key_75, data_75);
    ht_insert(ht, key_85, data_85);
    ht_insert(ht, key_95, data_95);
    ht_insert(ht, key_05, data_05);
    ht_insert(ht, key_15, data_15);
    ht_insert(ht, key_25, data_25);
    ht_insert(ht, key_35, data_35);
    ht_insert(ht, key_45, data_45);
    ht_insert(ht, key_55, data_55);
    ht_insert(ht, key_65, data_65);
    ht_insert(ht, key_75, data_75);
    ht_insert(ht, key_85, data_85);
    ht_insert(ht, key_95, data_95);
    ht_insert(ht, key_05, data_05);
}

Test(ht_insert, insert_same_key)
{
    hashtable_t *ht = new_hashtable(&hash, len_35);

    ht_insert(ht, key_15, data_15);
    ht_insert(ht, key_15, data_45);
}


Test(ht_insert, insert_wrong_key)
{
    hashtable_t *ht = new_hashtable(&hash, len_35);

    ht_insert(ht, "", data_15);
}

Test(ht_insert, insert_wrong_ht)
{
    hashtable_t *ht = new_hashtable(&hash, len_35);

    delete_hashtable(ht);
    ht_insert(ht, key_15, data_15);
}

