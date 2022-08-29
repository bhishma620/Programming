//SORTING ARRAY IN ASSENDING ORDER
#include<stdio.h>
int main (){
    int arr[5],n;
    printf("Enter the value of n:");
    scanf("%d",&n);
     printf("Enter the element :");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
        
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }

        }
    }
    printf("After sorting elements are:");
    for (int i = 0; i <n; i++)
    {
   printf("%d ",arr[i]);
    }
    
    
    
}
