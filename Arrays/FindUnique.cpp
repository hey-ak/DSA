#include<iostream>
using namespace std;
int Find_Unique(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}
int main(){
int arr[5]={1,1,2,2,6};
cout<<"The Unique Element is "<<Find_Unique(arr,5);

return 0;
}