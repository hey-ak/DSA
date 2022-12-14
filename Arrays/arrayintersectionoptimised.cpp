#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<int> Find_intersection(int arr1[],int arr2[],int n,int m){
    vector<int>ans;
    int i=0;
    int j=0;
    while (i<n && j<m)
    {
        if (arr1[i]==arr2[j])
    {
          ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i]<arr2[j])
    {
      
        i++;
    }
    else
    {
        j++;
    }
    
    
    
    
        
    }
    
return ans;
 
}
int main(){
    int arr1[6]={1,2,3,4,5,6};
    int arr2[5]={2,3,5,9,8};
   vector<int> intersection=Find_intersection(arr1,arr2,6,5);
   for (int i = 0; i < intersection.size(); i++)
   {
     cout<<intersection[i]<<" ";
   }
   

return 0;
}