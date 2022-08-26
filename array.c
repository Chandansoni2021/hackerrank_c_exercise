#include<stdio.h>
int main()
{
    int n,i,j,c;
    int temp;
    printf("please enter the total length of array");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        printf("please enter the  %d number",i) ;
        scanf("%d",&arr[i]);
        } 
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
        if(arr[i]<arr[j]){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        } // yaha per hamne sorting algorithmapply kiya hai 
        //ki yadi numbers sorting mai na hai to yaha per sort 
        // ho jyenge
    }
    }
    c = 1;
    printf("the rank of this %d value is = 1\n",arr[0]);  // yaha per pahla index de diya 
       for (int i = 0; i <n-1; i++)
        {
                if(arr[i] == arr[i+1])
                    c=c;  // i think you are understand thease algo
                else{
                    c=c+1;
                }
                    printf("the rank of this %d value is = %d\n ",arr[i+1],c);
        }
    return 0;
}