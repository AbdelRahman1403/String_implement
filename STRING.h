#ifndef STRING_H
#define STRING_H
/*
    Author : AbdelRahman Ahmed Mohamed Yassin.
    file : STRING.h
    Description : in this file , the declaration of string.h functions.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *My_memset (char *dest , char val , int len);
char *My_memchar (char *dest , int val , int len_char);
int   My_memcmp(const void *str1, const void *str2, size_t n);
void *My_memcpy(char *dest, const char * src, size_t n);
char *My_strcat(char *dest, const char *src);
char *My_strncat(char *dest, const char *src , int counter);
int   My_strcmp(const char *str1, const char *str2);
char *My_strcpy(char *dest, const char *src);
int   My_strcspn(const char *str1, const char *str2);
int   My_strlen(const char *str);
char *My_strpbrk(const char *str1, const char *str2);
char *My_strrchr(const char *str, int c);
int   My_strspn(const char *str1, const char *str2);
char *My_strstr(const char *haystack, const char *needle);
char *My_strtok(char *str, const char *delim);
#endif // STRING_H
