// string interface
#ifndef _STRING_H_
#define _STRING_H_

// length
int strlen(const char *a);

// copy
char *strcpy(char *a, const char *b);

// compare
int strcmp(const char *a, const char *b);

// compare(predix)
int strncmp(const char *a, const char *b, int n);

// Append
char *strcat(char *a, const char *b);

#endif /* _STRING_H_ */
