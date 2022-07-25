#include<stdio.h>
int main()
{
    int n,a;
    int c=0;
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        c=c+1;
    }
    if(c!=3){
        printf("Not a Trendy Number");
    }
    else{
    a=(n/10)%10 ;  //middle number
       if(a%3==0){
            printf("Trendy Number");
       }
       else{
        printf("Not a Trendy Number");  
       }
    }
return 0;
    }