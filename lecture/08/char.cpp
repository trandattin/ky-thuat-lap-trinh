#include "stdio.h"
#include "string.h"
typedef char string[100];
typedef char* string2;



int main(){
    //string2 s2;
    //string s;
    /*for (int i=0 ; i< 99; i++){
        //s[i] = 'a'; 
        //*(s+i) = 'a';
        scanf("c",&s[i]);
    }*/
    //fflush(stdin);
    //gets(s);

    /*for (int i=0 ; i<99; i++){
        printf("%c, ",s[i]);
    }*/
    //printf("%s",s);
    //Do dai chuoi strlen(s)
    //copy chuoi strcpy(s)
    
    string s1 = "  Le   Van   Teo  ";
    string s2;
    int L = strlen(s1) -1;
    int i = 0;
    for (; s1[i] == ' '; i++);
        for(int j = 0; j < L-1; j++) s1[j] = s1[j+i];
    printf("%s",s1);

    //i = strlen(s) - 1;
    //for (; s[i]=' '; i--);
}