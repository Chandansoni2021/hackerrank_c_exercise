#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    float *num;	
    printf("how many number do you have ");
    scanf("%d",&n);
    num=(float*)calloc(n,sizeof(float));  // Memory is allocated for 'n' nums 
    if(num==NULL)
    {
        printf(" No memory is allocated.");
        exit(0);   //if no memory allocate so stop the program
    }
    printf("\n");
    for(i=0;i<n;i++)  
    {
       printf(" Number %d: ",i+1);
       scanf("%f",num+i);
    }
    for(i=1;i<n;i++)  
    {
       if(*num<*(num+i)) 
           *num=*(num+i);
    }
    printf(" The Largest num is :  %.2f",*num);
    return 0;
}
