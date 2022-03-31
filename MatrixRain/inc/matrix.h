#include <ncurses.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>

typedef struct display {
    int length;
    int start;
    int finish;
    wchar_t *arr;
} display;

int mx_strcmp(const char *, const char *);
void matrix_rain(WINDOW *, int, char **);
void mx_output_text(WINDOW *, int, int);
wchar_t random_unicode();
int mx_atoi(const char*);
int mx_atoichar(const char);
int mx_strlen(const char*);
