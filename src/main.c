/*
** EPITECH PROJECT, 2020
** EPI_errne_2019
** File description:
** main.c
*/

#include "errne.h"

int main(void)
{
    seterrne(1, "This is an error");
    errne = 1;

    warne("Warn%s", "ing");

    return (0);
}
