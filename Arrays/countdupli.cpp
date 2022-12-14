#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void countdp(int arr[],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==arr[i+1])
        {
            count++;
        }
        
        
    }
     cout<<count<<endl;
    
}
int main(){
    int arr[6]={1,2,4,4,5,5};
    countdp(arr,6);

return 0;
}