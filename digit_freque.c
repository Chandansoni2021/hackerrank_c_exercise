#include<stdio.h>
#include<string.h>
int main()
{
    int c=0;
    char str[100];
    scanf("%[^\n]",str);
    // for(int j=0;j<=9;j++){
    for(int i=0;str[i]!='\0';i++){
    //     if(str[i]==j){
    //         c=c+1;
    //     }
    // }
    printf("%c ",str[i]);
    c=0;
    }
    return 0;
}