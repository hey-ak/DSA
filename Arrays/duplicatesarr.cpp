#include<iostream>
using namespace std;
int Find_Duplicates(int arr[],int Size){
    int ans=0;
    for (int i = 0; i < Size; i++)
    {
        ans=ans^arr[i];
    }
    for (int i = 0; i < Size; i++)
    {
        ans=ans^i;
    }
    return ans;
    
    
}
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,9};
cout<<Find_Duplicates(arr,10);
return 0;
}