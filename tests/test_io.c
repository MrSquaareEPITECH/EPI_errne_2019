/*
** EPITECH PROJECT, 2020
** EPI_errne_2019
** File description:
** test_io.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <ctype.h>

#include "errne.h"

Test(warne, print, .init = cr_redirect_stderr)
{
    seterrne(1, "This is an error");
    errne = 1;

    char *param1 = "Warn%s";
    char *param2 = "ing";
    // char *expected = "Warning: This is an error";

    warne(param1, param2);
    fflush(stderr);
    // cr_assert_stderr_eq_str(expected);
}

Test(warne_at, print, .init = cr_redirect_stderr)
{
    seterrne(1, "This is an error");
    errne = 1;

    char *param1 = "test_io.c";
    int param2 = 38;
    char *param3 = "Warn%s";
    char *param4 = "ing";
    // char *expected = "test_io.c:38: Warning: This is an error";

    warne_at(param1, param2, param3, param4);
    fflush(stderr);
    // cr_assert_stderr_eq_str(expected);
}
