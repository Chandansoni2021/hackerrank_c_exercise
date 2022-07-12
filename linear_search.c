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
for(i=0;i<n;i++){
    if arr[i]==value{
    printf("%d", i)
    }
    else{
        printf("this value is not present in this array");
    }
}
return 0;
}
