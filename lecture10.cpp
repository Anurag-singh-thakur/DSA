/// swap alternate
/*
#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}
void swap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[5] = {11, 12, 13, 14, 15};
    swap(even, 8);
    printArray(even, 8);
    swap(odd, 5);
    printArray(odd, 5);
    return 0;
}*/

//finding unique elements
/*
int findUnique(int *arr, int size)
{
   int ans = 0 ;
   for(int i =0 ;i <size; i++){
       ans = ans^arr[i];
   }
   return ans; 
   
}*/
//finding a duplicate number 
/*
int findDuplicate(vector<int> &arr) 
{
    int ans =0 ; 
    for(int i =0 ; i<arr.size() ;i++){
        ans =  ans^arr[i];
    }
	for(int i =1; i<arr.size();i++){
        ans = ans^i; 
    }
    return ans; 
}*/


/* finding intersection of array */
/*


#include <bits/stdc++.h> 
#include <climits>

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int>ans;
   int i = 0; int  j= 0 ; 
   while(i<n&&j<m){
       if(arr1[i]==arr2[j]){
           ans.push_back(arr1[i]);
           i++;
           j++;

       }
       else if(arr1[i]<arr2[j])
       {
           i++;
       }
       else{
           j++;
       }
   }
   return ans;
}
}*/

/*pair sum solution*/
/*
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
 vector< vector<int> >ans; 
  for(int i =0 ;i<arr.size();i++)
  {
     for(int j = i+1;j<arr.size();j++)
     {
        if(arr[i]+arr[j]==s)
        {
           vector<int>temp; 
           temp.push_back(min(arr[i],arr[j]));
           temp.push_back(max(arr[i],arr[j]));
           ans.push_back(temp);
        }
     }
  }
  sort(ans.begin(), ans.end());
  return ans;
}*/

/* */