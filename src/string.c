/*
** EPITECH PROJECT, 2020
** EPI_errne_2019
** File description:
** string.c
*/

#include "errne.h"
#include "internal.h"

const char *strerrne(void)
{
    return errnemsgval(errne, 0);
}

int seterrne(int status, const char *msg)
{
    if (status <= 0)
        return (-1);
    if (msg == 0)
        return (-1);
    errnemaxval(status);
    return (errnemsgval(status, msg) ? 0 : -1);
}
