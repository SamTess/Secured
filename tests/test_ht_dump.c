/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Test Secured : main tests
*/

#include <criterion/criterion.h>
#include "../include/hashtable.h"

//?----------------------- KEY ----------------------//

char *key_14 = "1a1A";
char *key_24 = "2b2B";
char *key_34 = "3c3C";
char *key_44 = "1A1a";
char *key_54 = "2B2b";
char *key_64 = "3C3c";
char *key_74 = "11aA";
char *key_84 = "22bB";
char *key_94 = "aA11";
char *key_04 = "bB22";

//?----------------------- DATA ----------------------//

char *data_14 = "Data_CPE_110";
char *data_24 = "Data_PSU_100";
char *data_34 = "Data_MUL_100";
char *data_44 = "Data_NSA_100";
char *data_54 = "Data_PERSO";
char *data_64 = "Data_CPE_100";
char *data_74 = "Data_CPE_101";
char *data_84 = "Data_CPE_200";
char *data_94 = "Data_PSU_200";
char *data_04 = "Data_MUL_200";

//?----------------------- LENGTH ----------------------//

int const len_14 = 3;
int const len_24 = 5;
int const len_34 = 7;
int const len_44 = 9;
int const len_54 = 15;

//*----------------------- TEST ----------------------//

Test(ht_dump, dump_classic_1)
{
    hashtable_t *ht = new_hashtable(&hash, len_14);

    ht_insert(ht, key_14, data_14);
    ht_insert(ht, key_24, data_24);
    ht_insert(ht, key_34, data_34);
    ht_insert(ht, key_44, data_44);
    ht_insert(ht, key_54, data_54);
    ht_insert(ht, key_64, data_64);
    ht_insert(ht, key_74, data_74);
    ht_insert(ht, key_84, data_84);
    ht_insert(ht, key_94, data_94);
    ht_insert(ht, key_04, data_04);
    freopen("/dev/null", "w", stdout);
    ht_dump(ht);
    freopen("/dev/tty", "w", stdout);
}

Test(ht_dump, dump_classic_2)
{
    hashtable_t *ht = new_hashtable(&hash, len_24);

    ht_insert(ht, key_14, data_14);
    ht_insert(ht, key_24, data_24);
    ht_insert(ht, key_34, data_34);
    ht_insert(ht, key_44, data_44);
    ht_insert(ht, key_54, data_54);
    ht_insert(ht, key_64, data_64);
    ht_insert(ht, key_74, data_74);
    ht_insert(ht, key_84, data_84);
    ht_insert(ht, key_94, data_94);
    ht_insert(ht, key_04, data_04);
    freopen("/dev/null", "w", stdout);
    ht_dump(ht);
    freopen("/dev/tty", "w", stdout);
}

Test(ht_dump, dump_classic_3)
{
    hashtable_t *ht = new_hashtable(&hash, len_34);

    ht_insert(ht, key_14, data_14);
    ht_insert(ht, key_24, data_24);
    ht_insert(ht, key_34, data_34);
    ht_insert(ht, key_44, data_44);
    ht_insert(ht, key_54, data_54);
    ht_insert(ht, key_64, data_64);
    ht_insert(ht, key_74, data_74);
    ht_insert(ht, key_84, data_84);
    ht_insert(ht, key_94, data_94);
    ht_insert(ht, key_04, data_04);
    freopen("/dev/null", "w", stdout);
    ht_dump(ht);
    freopen("/dev/tty", "w", stdout);
}

Test(ht_dump, dump_classic_4)
{
    hashtable_t *ht = new_hashtable(&hash, len_44);

    ht_insert(ht, key_14, data_14);
    ht_insert(ht, key_24, data_24);
    ht_insert(ht, key_34, data_34);
    ht_insert(ht, key_44, data_44);
    ht_insert(ht, key_54, data_54);
    ht_insert(ht, key_64, data_64);
    ht_insert(ht, key_74, data_74);
    ht_insert(ht, key_84, data_84);
    ht_insert(ht, key_94, data_94);
    ht_insert(ht, key_04, data_04);
    freopen("/dev/null", "w", stdout);
    ht_dump(ht);
    freopen("/dev/tty", "w", stdout);
}

Test(ht_dump, dump_classic_5)
{
    hashtable_t *ht = new_hashtable(&hash, len_54);

    ht_insert(ht, key_14, data_14);
    ht_insert(ht, key_24, data_24);
    ht_insert(ht, key_34, data_34);
    ht_insert(ht, key_44, data_44);
    ht_insert(ht, key_54, data_54);
    ht_insert(ht, key_64, data_64);
    ht_insert(ht, key_74, data_74);
    ht_insert(ht, key_84, data_84);
    ht_insert(ht, key_94, data_94);
    ht_insert(ht, key_04, data_04);
    freopen("/dev/null", "w", stdout);
    ht_dump(ht);
    freopen("/dev/tty", "w", stdout);
}

Test(ht_dump, dump_empty)
{
    hashtable_t *ht = new_hashtable(&hash, len_34);

    freopen("/dev/null", "w", stdout);
    ht_dump(ht);
    freopen("/dev/tty", "w", stdout);
}

Test(ht_dump, dump_null)
{
    hashtable_t *ht = new_hashtable(&hash, len_34);

    delete_hashtable(ht);
    freopen("/dev/null", "w", stdout);
    ht_dump(ht);
    freopen("/dev/tty", "w", stdout);
}