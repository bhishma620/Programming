/*
Given an unsorted array arr[] of size N.
 Rotate the array to the left (counter-clockwise direction) by D steps,
  where D is a positive integer. 

Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.

*/

#include<iostream>
using namespace std;

void Reverse(int arr[],int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void leftrotate(int arr[],int d,int n){
    if(d==0)
    return ;
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
}
//printing elements
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int n,d;
   cout<<"Enter the size of the array:";
   cin>>n;
   int arr[n];
  cout<<"Enter "<<n <<"elements :";
   for(int i=0;i<n;i++){
   cin>>arr[i];
   }
   cout<<"Enter index of rotating:";
   cin>>d;
leftrotate(arr,d,n);
  cout<<"After rotating :\n";
  display(arr,n);
  return 0;
}