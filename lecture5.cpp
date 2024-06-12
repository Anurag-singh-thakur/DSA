// bitwise operators
/*
#include<iostream>
using namespace std;
int main(){
    int a  =4 ;
    int b  =6 ;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(~a)<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;



    return 0;
}*/
// increment and decrement operators
/*
#include <iostream>
using namespace std;
int main()
{
    int i = 7;
    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;

    return 0;
}*/
// output questions
/*#include<iostream>
using namespace std;
int main(){
    int a , b =1 ;
    a =10 ;
    if(++a)
    {
        cout<<b;
    }
    else
    {
        cout<<++b;
    }
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){

    int a =1 ;
    int b= 2 ;
    if(a-- > 0 && ++b > 2)
    {
        cout<<"Stage1-inside If";
    }else{
        cout<<"Stage2-inside Else";
    }
    return 0;
}*/

/*
#include<iostream>
using namespace std;
int main(){
    int a =1 ;
    int b= 2 ;
    if(a-- > 0 || ++b > 2){
        cout<<"Stage1-inside If";
    }else{
        cout<<"Stage2-inside Else";
    }


    return 0;
}*/

/*
#include<iostream>
using namespace std;
int main(){
    int number = 3 ;
    cout<<(25*(++number));
    return 0;
}*/
/*

#include<iostream>
using namespace std;
int main(){
    int a =1 ;
    int b= a++ ;
    int c = ++a;
    cout<<b;
    cout<<c;
    return 0;
}*/

// FOR LOOP

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    // cin >> n;
    // cout << "printing count from 1 to n" << endl;
   /* int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
            i++;
        }
        else
        {
            break;
        }
    }*/

   /*
   for(int a =0 ,   b =1 ,  c=2 ; a>=0 && b>=1 && c>=2 ; a-- ,b -- ,c++)
   {
    cout<<a <<" "<<b<<" "<<c;
   }
    return 0;*/
/*}*/ 

//sum of numbers from 1 to n 
/*
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the value of n"; 
    cin>>n;
    int sum =0 ;
    for(int i =1; i<=n; i++)
    {
        sum = sum+i;
    }
    cout<<sum<<endl;
    return 0;
}*/

//Fibonacci Series (0,1,1,2,3,5,8,13,21...)
/*
#include<iostream>
using namespace std;
int main(){
    int  n; 
    cout<<"Enter the value of n"; 
    cin>>n;
    int a =0 ;
    int b= 1 ; 
    int c ;
    cout<<a<<" "<<b<<" ";
    for(int i =1; i<=n; i++)
    {
       int nextnumber = a+b; 
       cout<<nextnumber<<" ";
       a =b ;
       b= nextnumber;
        
    }
cout<<c<<""<<endl;
    return 0;
}*/


//Prime Number 
/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the Number:";
    cin>>n;
    for(int i =2 ;i < n; i++)
    {
    //remainder = 0 . not a prime 
        if(n%i==0)
        {
            cout<<"Not a Prime Number"<<endl;
            break;
        }
        //remainder is not 0. it's a prime number
        else
        {
            cout<<"Prime Number"<<endl;
            break;
        }
    }
    return 0;
}*/

/*another method for prime*/
/*
#include<iostream>
using namespace std;
int main(){
    int  n; 
    cout<<"Enter the value of n"<<endl; 
    cin>>n;
    bool isPrime =1; 
    for(int i =2 ;i < n; i++)
    {
        if(n%i== 0)
        {
            isPrime =0;
            break;
        }
    }
    if(isPrime==0)
    {
        cout<<"Not a Prime Number"<<endl;
    }
    else
    {
        cout<<"Prime Number"<<endl;
    }
    return 0;
}*/
/*Continue Statement*/

/*#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<5 ;i++)
    {
        cout<<"Hii"<<endl ;
        cout<<"Hello"<<endl;
        continue;
        cout<<"Reply kar dia kr";
    }
    return 0;
}*/
//OUTPUT Questions Again
/*
#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<=5 ;i++)
    {
        cout<<i<<" "; 
        i++ ;
    }
    return 0;
}*/


/*
#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 0; i--) {
        cout << i << " ";
    }
    return 0;
}*/

/*
#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<=15 ;i++)
    {
        cout<<i<<" ";
        if(i&1)
        {
            continue;
        }
    }
    return 0;
}*/

/*
#include<iostream>
using namespace std;
int main()
{
    for(int i =0 ;i<5 ;i++)
    {
        for(int j =0 ;j<=5;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
}*/
/*
#include<iostream>
using namespace std;
int main(){
    for(int i = 0;i<5 ;i++){
        for(int j =0 ;j<=5;j++)
        {
            if(i+j == 10)
            {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}*/
//variable scope 
