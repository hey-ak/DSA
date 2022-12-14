#include<iostream>
using namespace std;
void Reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
 void print(int arr[],int size){
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
int main(){
int arr[9]={12,2,3,4,5,6,7,8,9};
Reverse(arr,9);
print(arr,9);
return 0;
}