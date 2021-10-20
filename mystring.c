#include <stdio.h>
#include "mystring.h"

int mystrlen(char *s){
	int len = 0;
	int i = 0;
	while (s[len] != '\0'){
		len++;
	}
	return len;
}

char *mystrcpy(char *dest, char *src){
	int i;
	for (i = 0; i < mystrlen(src); i++){
		dest[i] = src[i];
	}
	return dest;
}

char *mystrncat(char *dest, char *src, int n){
	int i;
	for (i = mystrlen(dest); i < mystrlen(dest) + n; i++){
		dest[i] = src[i];
	}
	return dest;
}

int mystrcmp(char *s1, char *s2){
	int i = 0;
	while (s1[i] != '\0' || s2[i] != '\0'){
		if (s1[i] > s2[i]){
			return 1;
		}
		else if (s1[i] < s2[i]){
			return -1;
		}
		i++;
	}
	return 0;
}

char *mystrchr(char *s, char c){
	int i;
	for (i = 0; i <= mystrlen(s); i++){
		if (s[i] == c)
			return s + i;
	}
	return NULL;
}