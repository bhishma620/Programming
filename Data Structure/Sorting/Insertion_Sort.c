#include <stdio.h>
int smallest(int arr[],int n,int k)
{
    int small = arr[k];
    int pos= k;
    for (int i = k+1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            pos = i;
        }

    }
    return pos;
}


int main()
{
    int n;
    printf("NO of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

   for(int i=0;i<n-1;i++){
    int a=smallest(arr,n,i);
    int temp=arr[i];
    arr[i]=arr[a];
    arr[a]=temp;
   }

    printf("after sorting : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
