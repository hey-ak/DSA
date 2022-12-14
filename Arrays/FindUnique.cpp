#include<iostream>
using namespace std;
int Find_Unique(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        
        ans=ans^arr[i];
        cout<<ans<<endl;
    }
    return ans;
    
}
int main(){
int arr[6]={1,1,2,2,6,7};
cout<<"The Unique Element is "<<Find_Unique(arr,6);

return 0;
}