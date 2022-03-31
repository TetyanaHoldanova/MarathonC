#pragma once

#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

int mx_strlen(const char *s);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char* s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strcmp(const char*s1, const char*s2);
char *mx_strcpy(char *dst, const char *src);
