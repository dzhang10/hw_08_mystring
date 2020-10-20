#include <stdio.h>
#include <stdlib.h>

#include "mystring.h"

int mystrlen( char *s){
	int len = 0;
	while(*s){
		len++;
		s++;
	}
	return len;
}

char * mystrcpy(char *s1, char *s2){
	int i=0;
	while(s2[i]){
		s1[i]=s2[i];
		i++;
	}
	s1[i]=0;
	return s1;
}

//char * mystrcat(char *s1, char *s2){}
//char * mystrncpy(char *s1, char *s2, int size){}

char * mystrncat(char *s1, char *s2, int size){
	int len = mystrlen(s1);
	int i;
	for(i=0;i<size;i++){
		s1[i+len]=s2[i];
	}
	s1[len+size]=0;
	return s1;
}


char * mystrchr(char * s, int c){
	int len = mystrlen(s);
	int i;
	for(int i=0;i<len+1;i++){
		if(s[i]==c) return (s+i);
	}

	return NULL;

}


int mystrcmp(char *s1, char *s2){
	while (*s1 || *s2){
		if(*s1 > *s2) return 1;
		if(*s1 < *s2) return -1;
		s1++;
		s2++;
	}
	return 0;
}
