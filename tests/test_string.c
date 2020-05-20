/*
** EPITECH PROJECT, 2020
** EPI_errne_2019
** File description:
** test_string.c
*/

#include <criterion/criterion.h>

#include "errne.h"

Test(seterrne, doesnt_exist)
{
    char *param1 = "This is an error";
    int actual = seterrne(1, param1);
    int expected = 0;

    cr_assert_eq(actual, expected);
}

Test(seterrne, exists)
{
    seterrne(1, "Already exists");

    char *param1 = "This is an error";
    int actual = seterrne(1, param1);
    int expected = -1;

    cr_assert_eq(actual, expected);
}

Test(seterrne, invalid_1)
{
    char *param1 = "This is an error";
    int actual = seterrne(0, param1);
    int expected = -1;

    cr_assert_eq(actual, expected);
}

Test(seterrne, invalid_2)
{
    char *param1 = "This is an error";
    int actual = seterrne(-1, param1);
    int expected = -1;

    cr_assert_eq(actual, expected);
}

Test(strerrne, doesnt_exist)
{
    errne = 1;

    const char *actual = strerrne();
    char *expected = NULL;

    cr_assert_eq(actual, expected);
}

Test(strerrne, exists)
{
    seterrne(1, "This is an error");
    errne = 1;

    const char *actual = strerrne();
    char *expected = "This is an error";

    cr_assert_str_eq(actual, expected);
}
