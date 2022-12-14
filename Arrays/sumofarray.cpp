#include<iostream>
using namespace std;
int ArraySum(int arr[],int size){
    int sum=0;
    for (int i = 0; i <size; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}
int main(){
 int size;
 cout<<"Enter The Size Of Array"<<endl;
 cin>>size;
 int* arr=new int[size];
 for (int i = 0; i <size; i++)
 {
   cin>>arr[i];
 }

 cout<<"The sum is "<<ArraySum(arr,size);
 
return 0;
}