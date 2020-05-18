/*
** EPITECH PROJECT, 2020
** EPI_errne_2019
** File description:
** io.c
*/

#define _GNU_SOURCE

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "errne.h"

void errore(int status, const char *fmt, ...)
{
    va_list arg;
    char *msg;

    va_start(arg, fmt);
    vasprintf(&msg, fmt, arg);
    va_end(arg);
    fprintf(stderr, "%s: %s\n", msg, strerrne());
    free(msg);
    exit(status);
}

void errore_at(int status, const char *name, int line, const char *fmt, ...)
{
    va_list arg;
    char *msg;

    va_start(arg, fmt);
    vasprintf(&msg, fmt, arg);
    va_end(arg);
    fprintf(stderr, "%s:%d: %s: %s\n", name, line, msg, strerrne());
    free(msg);
    exit(status);
}

void warne(const char *fmt, ...)
{
    va_list arg;
    char *msg;

    va_start(arg, fmt);
    vasprintf(&msg, fmt, arg);
    va_end(arg);
    fprintf(stderr, "%s: %s\n", msg, strerrne());
    free(msg);
}

void warne_at(const char *name, int line, const char *fmt, ...)
{
    va_list arg;
    char *msg;

    va_start(arg, fmt);
    vasprintf(&msg, fmt, arg);
    va_end(arg);
    fprintf(stderr, "%s:%d: %s: %s\n", name, line, msg, strerrne());
    free(msg);
}
