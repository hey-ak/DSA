#include<iostream>
using namespace std;
void print(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

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
 input(arr,size);
 cout<<"Output"<<endl;
 print(arr,size);


return 0;
}