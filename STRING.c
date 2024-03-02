/**
    *@Author : AbdelRahman Ahmed Mohamed Yassin.
    *@file : STRING.c
    *@Description : in this file , the definition of string.h functions.
*/

#include "STRING.h"
void *My_memset (char *dest , char val , int len){
    char *temp = dest;
    if(dest == NULL)
    {
     printf("Error!! you pass null value , memset do not work\n");

    }
    else{
        while(len--){
            *dest++ = val;
        }
    }
}
char *My_memchar (char *dest , int val , int len_char){
    if(dest == NULL)
    {
     printf("Error!! you pass null value , memchar do not work\n");
     return NULL;
    }
    else {
        // Method One
        /*for(int i = 0; i < len_char; i++){
            if(*(dest + i) == val){
                return dest + i;
            }
        }*/
        // Method Two
        while(*dest != val) dest++;
        return dest;
    }
}

int  My_memcmp(const void *str1, const void *str2, size_t n){
    if(str1 == NULL || str2 == NULL)
    {
     printf("Error!! you pass null value , memcmp do not work\n");
     return NULL;
    }
    else {
        int counter = 0;
        char *temp1 = (char *)str1;
        char *temp2 = (char *)str2;
        for(int i = 0 ; i < n; i++){
            if(temp1[i] != temp2[i]) counter+=1;
        }
        return counter;
    }
}

void *My_memcpy(char *dest, const char * src, size_t n){
    if(dest == NULL || src == NULL)
    {
     printf("Error!! you pass null value , memcmp do not work\n");
     return NULL;
    }
    else{
        for(int i = 0 ; i < n-1; i++){
            *(dest + i) = *src;
            src++;
        }
        *(dest+n) = '\0';
    }
}

char *My_strcat(char *dest, const char *src){
    // linkedlist using Array , why?
    char *ptr = dest + strlen(dest);
    while(*src != '\0')
        *ptr++ = *src++;
    *ptr = '\0';
    return dest;
}

char *My_strncat(char *dest, const char *src , int counter){
    // linkedlist using Array , why?
    int i = 0;
    char *ptr = dest + strlen(dest);
    while(*src != '\0' && i < counter){
        *ptr++ = *src++;
        i++;
    }

    *ptr = '\0';
    return dest;
}

int   My_strcmp(const char *str1, const char *str2){
    //int counter = 0;
    while(*str1++ != *str2++){
        return str1[-1] > str2[-1] ? 1 : -1;
    }

    /*
    while(*str1 && *str1 == *str2){
        str1++,str2++;
    }
    return (*str1 > *str2) - (*str2 > *str1);
    */
    return 0;
}
char *My_strcpy(char *dest, const char *src)
{
    char *temp = dest;
    while(*src != '\0'){
        *temp++ = *src++;
    }
    return temp;
}
int My_strcspn(const char *str1, const char *str2){
    char ch = str2[0];
    int i = 0;
    while(*str1 != '\0')
    {
        if(*str1 == str2[0]){
            break;
        }
        else{
            str1++;
            i++;
        }
    }
    return i;
}

int   My_strlen(const char *str){
    int counter = 0;
    while(*str != '\0'){
        counter++;
        *str++;
    }
    return counter;
}

char *My_strpbrk(const char *str1, const char *str2){
    char ch = str2[0];
    while(*str1 != '\0')
    {
        if(*str1 == str2[0]){
            break;
        }
        else{
            str1++;
        }
    }
    return str1;
}
char *My_strrchr(const char *str, int c){
    while(*str != '\0')
    {
        if(*str == c){
            break;
        }
        else {
            *str++;
        }
    }
    return str;
}

int   My_strspn(const char *str1, const char *str2){
    int counter = 0;
    while(*str1 != '\0'){
        char *temp = str2;
        while(*temp != '\0'){
            if(*temp == *str1){
                counter++;
                break;
            }
            *temp++;
        }
        *str1++;
    }
    return counter;
}

char *My_strstr(const char *haystack, const char *needle){
    char *ch = NULL;
    int len = My_strlen(needle);
    /*while(*haystack != '\0'){
            int counter = 0;
        for(int i = 0 ; i < len; i++){
            if(*(haystack+i) == *(needle+i))
            {
                counter++;
            }
            else {
                break;
            }
        }
        if(counter == len){
            *ch = needle;
            break;
        }
        *haystack++;
    }*/
    while(*haystack){
        if(!My_memcmp(haystack++ , needle , len)){
            *ch = haystack-1;
            break;
        }
    }
    return ch;
}

char *My_strtok(char *str, const char *delim){
    char *ch = NULL;
    while(*str != *delim){
        ch+=*str;
        *str++;
    }
    *str = '\0';
    return ch;
}
