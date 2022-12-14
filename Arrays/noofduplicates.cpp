#include<iostream>
using namespace std;
int Find_duplicates(int arr[],int size){
int ans =0;
for (int i = 0; i < size; i++)
{
    ans= ans^arr[i];
    cout<<ans<<endl;
}
 return -1;
}
int main(){
int arr[5]={1,3,3,4,4};
cout<<Find_duplicates(arr,5);

return 0;
}