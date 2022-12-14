#include<iostream>
#include<climits>
using namespace std;
void Find_intersection(int arr1[],int arr2[],int n,int m){
 for (int i = 0; i < n; i++)
 {
    int element=arr1[i];
    for (int j = 0; j <m; j++)
    {
        if (element==arr2[j])
        {
            cout<<element<<" ";
            arr2[j]= INT_MIN;
            break;
        }
        
    }
    
 }
 
}
int main(){
    int arr1[6]={1,2,3,4,5,6};
    int arr2[5]={2,3,5,9,8};
    Find_intersection(arr1,arr2,6,5);

return 0;
}