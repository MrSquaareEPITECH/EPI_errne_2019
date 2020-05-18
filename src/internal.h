/*
** EPITECH PROJECT, 2020
** EPI_errne_2019
** File description:
** internal.h
*/

#ifndef EPI_ERRNE_2019_SRC_INTERNAL_H
#define EPI_ERRNE_2019_SRC_INTERNAL_H

typedef struct errne_map_s errne_map_t;

struct errne_map_s {
    int val;
    const char *msg;
};

const char *errnemsgval(int val, const char *msg);

#endif // EPI_ERRNE_2019_SRC_INTERNAL_H
