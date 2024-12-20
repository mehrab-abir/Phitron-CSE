#include<stdio.h>
#include<string.h>

int main(){
    char S[99];
    printf("Type: ");
    gets(S);

    int len = strlen(S);
    int middle = (len+1)/2;

    printf("%c",S[middle-1]);
    return 0;
}
