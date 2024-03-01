/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Test Secured : main tests
*/

#include <criterion/criterion.h>
#include "../include/hashtable.h"

//?----------------------- KEY ----------------------//

char *key_12 = "1a1A";
char *key_22 = "2b2B";
char *key_32 = "3c3C";
char *key_42 = "1A1a";
char *key_52 = "2B2b";
char *key_62 = "3C3c";
char *key_72 = "11aA";
char *key_82 = "22bB";
char *key_92 = "aA11";
char *key_02 = "bB22";

//?----------------------- DATA ----------------------//

char *data_12 = "Data_CPE_110";
char *data_22 = "Data_PSU_100";
char *data_32 = "Data_MUL_100";
char *data_42 = "Data_NSA_100";
char *data_52 = "Data_PERSO";
char *data_62 = "Data_CPE_100";
char *data_72 = "Data_CPE_101";
char *data_82 = "Data_CPE_200";
char *data_92 = "Data_PSU_200";
char *data_02 = "Data_MUL_200";

//?----------------------- LENGTH ----------------------//

int const len_neg = -56;
int const len_00 = 0;
int const len_12 = 3;
int const len_22 = 5;
int const len_32 = 7;
int const len_42 = 9;
int const len_52 = 15;

//*----------------------- TEST ----------------------//

Test(hash_funct, len_of_0)
{
    cr_assert(hash(key_12, len_00) == -1);
}

Test(hash_funct, len_neg)
{
    cr_assert(hash(key_32, len_neg) == -1);
}

Test(hash_funct, len_classic)
{
    cr_assert(hash(key_52, len_12) != -1);
}