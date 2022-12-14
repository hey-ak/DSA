#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size of Array"<<endl;
    cin>>n;
int *arr = new int[n];
for (int  i = 0; i<n; i++)
{
    cin>>arr[i];
}

sort(arr,arr+n);
for (int i = 0; i <n; i++)
{
    if (arr[i]==arr[i+1])
    {
        cout<<arr[i]<<" ";
    }
    
}


// for (int  i = 0; i <n; i++)
// {
//     cout<<arr[i]<<" ";
// }





return 0;
}