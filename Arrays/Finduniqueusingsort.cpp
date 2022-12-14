#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Find_unique(int arr[],int n){
  for (int i = 0; i <n; i++)
  {
    if (arr[i]==arr[i+1])
    {
         i++;
    }
    else
    {
        cout<<arr[i]<<" ";
    }
    
    
       
  }
  

}
int main(){
int arr[6]={1,1,3,4,5,5};
sort(arr,arr+6);
Find_unique(arr,6);
return 0;
}