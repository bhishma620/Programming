#include<iostream>
using namespace std;
void rotate(int arr[],int n,int d){
 int temp[n],k=0;
 //copying elements from d index
 for(int i=d;i<n;i++){
   temp[k]=arr[i];
   k++;
 }
 //before d index's elements copying
 for(int i=0;i<d;i++){
    temp[k]=arr[i];
    k++;
 }

//copying the temp array into arr
for(int i=0;i<n;i++){
    arr[i]=temp[i];
}

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
   rotate(arr,n,d);
  cout<<"After rotating :\n";
  display(arr,n);
  return 0;
}
