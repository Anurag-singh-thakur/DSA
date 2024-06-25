/// Homework
// method 1

/*
#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{
    const int size = 10;
    int arr[size];

    fill_n(arr, 5, 1);

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/


//method 2
/*
#include<iostream>
using namespace std ;
int main()
{
    int arr[100] ;
    for(int i =0 ;i<100;i++)
    {
        arr[i] = 3 ;
    }
    for(int i = 0; i<100 ;i++){
        cout<<arr[i];
    }
}
*/

// #include<iostream>
// using namespace std;
// void printArray(int arr[], int size ){
    //printing the array 
    // for(int i = 0; i<size ;i++){
        // cout<<arr[i]<<endl;
//     }
// }
// int main(){
    //declaration of array 
   /// int number[15]; 
    //  cout<<number[5] <<endl;
    // cout<<number[10] <<endl;
    // cout<<number[14] <<endl;
   

   // int second[3] = {5 ,7,123};
    // cout<<second[1]<<endl ;
    // cout<<second[0]<<endl ;
    // cout<<second[2]<<endl ;

    // int third[15] ={1,4};
    // for(int i = 0; i<15 ;i++){
    //     // cout<<third[i]<<endl;
    // }
    // printArray(third , 15) ;
    //initialising all location = 0 ; 
    // int fourth[10] = {0};
    // for(int i = 0; i<10 ;i++){
        // cout<<fourth[i]<<endl;

        //  printArray(fourth , 10) ;
   // }
    //first element =1 and other set to 0 
    // int fifth[10] = {1};
    // for(int i = 0; i<10 ;i++){
        // cout<<fifth[i]<<endl;
   // }

    // cout<<sizeof(fifth)/sizeof(int)<<endl;
    // cout<<sizeof(third)/sizeof(int)<<endl;

//     char ch[5] ={'a' ,'b' , 's' ,'e' , 'l'};
//     for(int i = 0; i<5 ;i++)
//         {
//             cout<<ch[i]<<endl;
//         }
//         double firstDouble[9];
//         float firstFloat[20];
//         bool firstBool[6] ;

//     return 0;
// }

/*MIN /MAX Question*/

/*
#include<iostream>
#include <climits> 

using namespace std;
int getMax(int num[] , int n){
    int max = INT_MIN;
    for(int i = 0; i<n ;i++){
        if(num[i]>max){
            max = num[i];
        }
       
    }
    return max; 
}
int getMin(int num[] , int n){
    int min = INT_MAX;
    for(int i = 0; i<n ;i++){
        if(num[i]<min){
            min = num[i];
        }
       
    }
    return min; 
}
int main(){
    int size;
    cout<<"Enter the size of array: ";  
    cin>>size;
    int num[1000];
    for(int i = 0; i<size ;i++){
        cin>>num[i];
    }
    cout<<"Maximum Value is:"<<getMax(num, size)<<endl;
    cout<<"Minimum Value is:"<<getMin(num, size)<<endl;
    return 0;
}*/

/*
#include<iostream>
using namespace std;
void update(int arr[],int n){
    for(int i = 0; i<n ;i++){
        arr[0] = 120 ;
        arr[i] = arr[i]+1;
    }
}
int main(){
    int arr[3] = {1 ,2,3};
    update(arr,3) ;
    for(int i = 0; i<3 ;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}*/

//homework question
/*

#include<iostream>
using namespace std;
int sum(int arr[] , int n )
{
    int sum = 0;
    for(int i = 0; i<n ;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int size ;
    cout<<"Enter the size of array: ";  
    cin>>size;
    int arr[5] ;
    for(int i = 0; i<size ;i++){
        cin>>arr[i];
    }
    cout<<"The sum of the array is:"<<sum(arr , 5 );
    return 0;
}*/

//linear search
/*
#include<iostream>
using namespace std;
bool search(int arr[] , int size, int key){
     for(int i =0 ;i<size ;i++){
        if(arr[i] ==key)
     {
         return 1;
     }
     
     }
     return 0 ;
}
int main(){
    int arr[10] = { 2,3,4,5,1,-3,-5,43,9,6};
    //whether 1 is present or not
      int key;
    cout<<"Enter the element to search for: "; 
  
    cin>>key ;
   bool found =  search(arr ,10 ,key ) ;
    if(found == true){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found" ;
    }
    return 0;
}*/

//reverse an array 
/*
#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0; 
    int end = n-1; 
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++ ;
        end--; 
    }
    

}
void printArray(int arr[] , int n){
    for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int arr[6] = {1,4,5,6,9,7};
    int brr[5] = {2,3,4,5,6} ;
    reverse(arr ,6);
    reverse(brr ,5);

    printArray(arr ,6);
    printArray(brr ,5);
    return 0;
}*/