#include<stdio.h>
int main()
{
    int n;
    int value;
printf("please enter the size of an array :-");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("please enter the value which u search in array :-");
scanf("%d",&value);
for(int i=0;i<n;i++){
    if(arr[i]==value){
    printf("%d", i);
    }
    }
return 0;
}
