/*
** EPITECH PROJECT, 2020
** EPI_errne_2019
** File description:
** test_internal.c
*/

#include <criterion/criterion.h>

#include "errne.h"

Test(errneval, val)
{
    errne = 1;
    int actual = errne;
    int expected = 1;

    cr_assert_eq(actual, expected);
}

Test(errnemaxval, val)
{
    seterrne(1, "This is an error");

    int actual = errnemax;
    int expected = 1;

    cr_assert_eq(actual, expected);
}
