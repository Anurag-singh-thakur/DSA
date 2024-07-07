// This lectures is all about the technique used in the sorting algorithm that is insertion sort

//insertion sort algorithm (problem no 1)
//solution 
/*
#include <bits/stdc++.h> 

void insertionSort(int n, vector<int> &arr){

    for(int i =1 ; i<n ;i++){
        int temp  = arr[i];
        int j = i-1;
        for( ; j>= 0 ;j--){
            if(arr[j]>temp){
                //shift 
                arr[j+1] = arr[j];
            }
            else{ //ruk jaaaao
                break  ;
            }
        }
        arr[j+1] =  temp ;
    }

}*/