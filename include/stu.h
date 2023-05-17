/*
 * E89 Pedagogical & Technical Lab
 * project:     day_105
 * created on:  Sat May  6 12:24:18 2023
 * 1st author:  user
 * description: stu.h
*/

#ifndef STU_LIB_H_
#define STU_LIB_H_

int stu_atoi(const char *str);

char *stu_strcat(char *dest, const char *src);

char *stu_strcpy(char *dest, const char *src);

unsigned int stu_strlen(const char *str);

char *stu_strstr(const char *haystack, const char *needle);

char *stu_strpbrk(const char *s, const char *accept);

void *stu_memcpy(void *dest,
                 const void *src,
                 unsigned int n);

int stu_putchar(const char *c, int value);

int stu_puts(const char *str);

char *stu_strchr(const char *str, char search);

int stu_strcmp(const char *s1, const char *s2);

char *stu_strdup(const char *str);

char *stu_strncpy(char *dest, const char *src, unsigned int n);

char *stu_strndup(const char *str, unsigned int nmb);

char *stu_strrchr(const char *str, char search);

int swap_int(int *xtata, int *xtoto);

int pos_buf(char *buf, int l);

void writewithoutn(int k, int l, char *buf);

void reverse(char *buf);

char *stu_strdupcat(const char *a, const char *b);

#endif  // STU_LIB_H_
