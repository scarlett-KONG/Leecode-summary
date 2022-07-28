#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*First method. Easy to understand, but occupies too much memory and runs too slowly*/
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

/*Second method :  by taking use of ascii table, mapping each */
bool isIsomorphic_2(char *s, char *t){
    int len = strlen(s);
    int sCharacter[128] = {0};
    int tCharacter[128] = {0};//构建ASCII表

    int s_counter = 1;
    int t_counter = 1;

    for(int i=0; i<len; i++){
        if(sCharacter[s[i]] == 0){
            sCharacter[s[i]] = s_counter;
            s_counter++;//如果出现，则ASCII表对应位置赋值为1，每出现一次个数+1
        }
        if(sCharacter[s[i]] != 0){
            s[i] = sCharacter[s[i]];
        }
        if(tCharacter[t[i]] == 0){
            tCharacter[t[i]] = t_counter;
            t_counter ++;
        }
        if(tCharacter[t[i]]!=0){
            t[i] = tCharacter[t[i]];
        }
        if(s[i]!=t[i]){
            return false;//对比每个位置的出现次数是否相同
        }
    }
    return true;
}