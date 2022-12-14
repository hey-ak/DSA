#include<iostream>
using namespace std;
bool Search(int arr[],int Size,int key){
    for (int i = 0; i < Size; i++)
    {
        if (arr[i]=key)
        {
            return 1;
        }
        
        
        
    }
    return 0;
 

}
int main(){
int key;
cout<<"Enter The Element To Search"<<endl;
cin>>key;
int arr[10]={2,5,6,4,8,9,7,10,3,2};
bool found= Search(arr,10,key);
if (found)
{
    cout<<"Element Found";
}
else
{
    cout<<"Not Found"<<endl;
}




return 0;
}