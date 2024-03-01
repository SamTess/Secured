/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Test Secured : main tests
*/

#include <criterion/criterion.h>
#include "../include/hashtable.h"

Test(mini_printf, case_pour_case_char)
{
    freopen("/dev/null", "w", stdout);
    mini_printf("%%%c", 'T');
    freopen("/dev/tty", "w", stdout);

}

Test(my_strcmp, case_unmatch)
{
    cr_assert(my_strcmp("Bonj", "Au Reffff") != 0, "Wrong compare");
    cr_assert(my_strcmp("Bonj", "Biii") != 0, "Wrong compare");
}

Test(my_strdup, case_null)
{
    cr_assert_str_eq(my_strdup(""), "\0", "Wrong dup");
}

Test(my_put_nbr, case_neg)
{
    freopen("/dev/null", "w", stdout);
    my_put_nbr(-445);
    freopen("/dev/tty", "w", stdout);
}