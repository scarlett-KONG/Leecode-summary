#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int *map(char *s){
    int *num = malloc((strlen(s))*sizeof(int));
    int i,j=0;
    for(i=0;i<strlen(s);i++){
        num[i] = i;
        for(j=0;j<i;j++){
            if (*(s+j)==*(s+i)){
                num[i]=j;
                break;
            }
        }
    }
    return num;
}

bool isIsomorphic(char *s, char *t){
    if(strlen(s)!=strlen(t)) return false;
    int i=0,*num_t=map(t),*num_s=map(s);
    while(i<strlen(s)){
        if(num_t[i]!=num_s[i]) return false;
        i++;
    }
    return true;
}

int main(){
    char *s = "badc";
    char *t = "baba";
    if(isIsomorphic(s,t)){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}