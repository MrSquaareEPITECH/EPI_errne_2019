/*
** EPITECH PROJECT, 2020
** EPI_errne_2019
** File description:
** internal.c
*/

#include "internal.h"

int *errneval()
{
    static __thread int val = 0;

    return &val;
}

int errnemaxval(int val)
{
    static __thread int maxval = 0;

    if (val > maxval)
        maxval = val;
    return maxval;
}

const char *errnemsgval(int val, const char *msg)
{
    static __thread int total = 0;
    static __thread errne_map_t map[256];
    const char *idx = 0;

    for (int i = 0; (i < total) && !idx; ++i)
        if (map[i].val == val)
            idx = map[i].msg;
    if (msg) {
        if (idx)
            return (0);
        map[total].val = val;
        map[total++].msg = msg;
    }
    return (idx);
}
