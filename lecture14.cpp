// get pivot element in an array


/*
#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot is" << getPivot(arr, 5);

    return 0;
}*/
//----------------------------------------------------------------
//search in a rotated and sorted array
/*

int getPivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}


int binarySearch(vector<int>& arr,  int s , int e , int key){
    int start =s; 
    int end = e;  
    int mid = start+ (end-start)/2; 
    while(start<=end){
        if(arr[mid]==key){
            return mid; 

        }
       else  if(key> arr[mid]){
            start = mid+1; 
        }
        else{
            end = mid-1 ; 
        }
        mid = start + (end-start)/2; 
    }
    return -1 ;
}


int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if((k>=arr[pivot]) &&( k <=arr[n-1]) )
    { //BS o second line 
        return binarySearch(arr , pivot , n-1 , k); 


    }else{ // BS on first line 
        return binarySearch(arr , 0 , pivot-1 ,k );
    }
}

*/

//================================================================
//finding the square root of an integer with the help of binary search
/*
class Solution {
public:
  long long  int binarySearch(int n){
        int s =0 ;
        int e = n ;
      long long   int mid  =  s +  (e-s)/2 ;
       long long   int ans =-1;
        while(s<=e){
            long long int square = mid *mid ;
            if(square == n){
                return mid ;
            }
            if(square<n){
                 ans = mid ;
            s =mid+1; 

            }
            else{
                e = mid-1 ;
                
            }
            mid = s + (e-s)/2 ;
        } 
        return ans; 
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};*/
#include<iostream>
using namespace std; 

long long int sqrtinteger(int n) {
    int s =0 ;
    int e = n ;
  long long   int mid  =  s +  (e-s)/2 ;
  long long   int ans =-1;
    while(s<=e){
      long long   int square = mid * mid ;
        if(square == n){
            return mid ;
        }
        if(square<n){
             ans = mid ;
            s = mid+1; 
        }
        else{
            e = mid-1 ;
            
        }
        mid = s + (e-s)/2 ;
    } 
    return ans; 
}

double morePrecision(int n,  int precision , int tempSol) {
    double factor =1 ;
    double ans = tempSol ;
    for(int i = 0 ; i < precision ; i++){
        factor =  factor/10 ;
        for(double j=ans  ;j*j<n ; j = j+factor){
            ans = j ;
    
    }
    
}
return ans ;
}

int main()
{
    int n;
    cout<<"Enter the number "<<endl ;
    cin>>n; 
    int tempSol = sqrtinteger(n) ;
    cout<<"Answer is "<<morePrecision(n ,3 ,tempSol)<<endl;
}