/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Test Secured : main tests
*/

#include <criterion/criterion.h>
#include "../include/hashtable.h"

//?----------------------- KEY ----------------------//

char *key_16 = "1a1A";
char *key_26 = "2b2B";
char *key_36 = "3c3C";
char *key_46 = "1A1a";
char *key_56 = "2B2b";
char *key_66 = "3C3c";
char *key_76 = "11aA";
char *key_86 = "22bB";
char *key_96 = "aA11";
char *key_06 = "bB22";

//?----------------------- DATA ----------------------//

char *data_16 = "Data_CPE_110";
char *data_26 = "Data_PSU_100";
char *data_36 = "Data_MUL_100";
char *data_46 = "Data_NSA_100";
char *data_56 = "Data_PERSO";
char *data_66 = "Data_CPE_100";
char *data_76 = "Data_CPE_101";
char *data_86 = "Data_CPE_200";
char *data_96 = "Data_PSU_200";
char *data_06 = "Data_MUL_200";

//?----------------------- LENGTH ----------------------//

int const len_16 = 3;
int const len_26 = 5;
int const len_36 = 7;
int const len_46 = 9;
int const len_56 = 15;

//*----------------------- TEST ----------------------//

Test(ht_search, search_simple)
{
    hashtable_t *ht = new_hashtable(&hash, len_36);

    ht_insert(ht, key_16, data_16);
    ht_insert(ht, key_26, data_26);
    ht_insert(ht, key_36, data_36);
    ht_insert(ht, key_46, data_46);
    ht_insert(ht, key_56, data_56);
    ht_insert(ht, key_66, data_66);
    ht_insert(ht, key_76, data_76);
    ht_insert(ht, key_86, data_86);
    ht_insert(ht, key_96, data_96);
    ht_insert(ht, key_06, data_06);
    cr_assert_str_eq(ht_search(ht, key_16), data_16, "Bad result simple");
}

Test(ht_search, search_multiple)
{
    hashtable_t *ht = new_hashtable(&hash, len_36);

    ht_insert(ht, key_16, data_16);
    ht_insert(ht, key_26, data_26);
    ht_insert(ht, key_36, data_36);
    ht_insert(ht, key_46, data_46);
    ht_insert(ht, key_56, data_56);
    ht_insert(ht, key_66, data_66);
    ht_insert(ht, key_76, data_76);
    ht_insert(ht, key_86, data_86);
    ht_insert(ht, key_96, data_96);
    ht_insert(ht, key_06, data_06);
    cr_assert_str_eq(ht_search(ht, key_16), data_16, "Bad result multiple 1");
    cr_assert_str_eq(ht_search(ht, key_36), data_36, "Bad result multiple 2");
    cr_assert_str_eq(ht_search(ht, key_76), data_76, "Bad result multiple 3");
    cr_assert_str_eq(ht_search(ht, key_06), data_06, "Bad result multiple 4");
}

Test(ht_search, wrong_search)
{
    hashtable_t *ht = new_hashtable(&hash, len_36);

    ht_insert(ht, key_16, data_16);
    ht_insert(ht, key_26, data_26);
    ht_insert(ht, key_36, data_36);
    ht_insert(ht, key_46, data_46);
    ht_insert(ht, key_56, data_56);
    ht_insert(ht, key_66, data_66);
    ht_insert(ht, key_76, data_76);
    ht_insert(ht, key_86, data_86);
    ht_insert(ht, key_96, data_96);
    ht_insert(ht, key_06, data_06);
    cr_assert_str_eq(ht_search(ht, "Bonjour"), "\0", "Bad result NULL");
}

Test(ht_search, null_search)
{
    hashtable_t *ht = new_hashtable(&hash, len_36);

    ht_insert(ht, key_16, data_16);
    ht_insert(ht, key_26, data_26);
    ht_insert(ht, key_36, data_36);
    ht_insert(ht, key_46, data_46);
    ht_insert(ht, key_56, data_56);
    ht_insert(ht, key_66, data_66);
    ht_insert(ht, key_76, data_76);
    ht_insert(ht, key_86, data_86);
    ht_insert(ht, key_96, data_96);
    ht_insert(ht, key_06, data_06);
    cr_assert_str_eq(ht_search(ht, ""), "\0", "Bad result empty");
}

Test(ht_search, ht_null_search)
{
    hashtable_t *ht = new_hashtable(&hash, len_36);

    ht_insert(ht, key_16, data_16);
    ht_insert(ht, key_26, data_26);
    ht_insert(ht, key_36, data_36);
    ht_insert(ht, key_46, data_46);
    ht_insert(ht, key_56, data_56);
    ht_insert(ht, key_66, data_66);
    ht_insert(ht, key_76, data_76);
    ht_insert(ht, key_86, data_86);
    ht_insert(ht, key_96, data_96);
    ht_insert(ht, key_06, data_06);
    delete_hashtable(ht);
    cr_assert_str_eq(ht_search(ht, key_26), "\0", "Bad result ht");
}

Test(ht_search, ht_non_init_search)
{
    hashtable_t *ht = new_hashtable(&hash, len_36);
    hashtable_t *htp = NULL;

    ht_insert(ht, key_16, data_16);
    ht_insert(ht, key_26, data_26);
    ht_insert(ht, key_36, data_36);
    ht_insert(ht, key_46, data_46);
    ht_insert(ht, key_56, data_56);
    ht_insert(ht, key_66, data_66);
    ht_insert(ht, key_76, data_76);
    ht_insert(ht, key_86, data_86);
    ht_insert(ht, key_96, data_96);
    ht_insert(ht, key_06, data_06);
    cr_assert_str_eq(ht_search(htp, key_16), "\0", "Bad result ht");
}