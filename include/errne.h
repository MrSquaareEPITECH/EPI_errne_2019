/*
** EPITECH PROJECT, 2020
** EPI_errne_2019
** File description:
** errne.h
*/

#ifndef EPI_ERRNE_2019_SRC_ERRNE_H
#define EPI_ERRNE_2019_SRC_ERRNE_H

int *errneval(void);
int errnemaxval(int val);

#define errne (*errneval())
#define errnemax (errnemaxval(0))

const char *strerrne(void);
int seterrne(int status, const char *msg);
void errore(int status, const char *fmt, ...);
void errore_at(int status, const char *name, int line, const char *fmt, ...);
void warne(const char *fmt, ...);
void warne_at(const char *name, int line, const char *fmt, ...);

#endif // EPI_ERRNE_2019_SRC_ERRNE_H
