#include<stdio.h>
int main(){
    int n,a,b,c,d;
    scanf("%d",&n);
    a=0;
    b=0;
    c=1;
    d=a+b+c;
    printf("%d %d %d ",a,b,c);
    for(int i=3;i<n;i++){
	  printf("%d ",d);
      a=b;
      b=c;
      c=d;
      d=a+b+c;
    }
     return 0;

}