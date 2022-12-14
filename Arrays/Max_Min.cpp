#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

}
 int Max(int arr[],int size){
  return arr[size-1];
    
 }
 int Min(int arr[],int size){
  return arr[0];
    
 }
void input(int arr[],int size){
 for (int i = 0; i < size; i++)
 {
    cin>>arr[i];
 }
 

}
int main(){
 int size;
 cout<<"Enter The Size of Array"<<endl;
 cin>>size;
 int* arr=new int[size];
cout<<"Enter Elements"<<endl;
 input(arr,size);
 cout<<"Output"<<endl;
 print(arr,size);
// cout<<"After Sorting"<<endl;
sort(arr,arr+size);
// print(arr,size);
cout<<"Min element is "<<Min(arr,size);
cout<<endl;
cout<<"Max element is "<<Max(arr,size);



return 0;
}