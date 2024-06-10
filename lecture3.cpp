// thislecture is covering the if , if-else , while loop and lots of patterns
//  #include<iostream>
//  using namespace std ;
//  int main(){
/* int a;
  cin>>a;

  if (a>0)//a is positive
  {
      cout<<"a is positive"<<endl;
  }
  else
  {
      cout<<"a is negative"<<endl;

  }*/
/*  int a , b;
   cin>>a>>b;

  cout<<"value of a and b is"<<a<< b<<endl;

  if (a>b)
  {
   cout<<"value of a is greater than b";
  }*/
/*
int  a ;
a = cin.get(); //gives the character mapped ascii value as it inputs the value as a character not as an integer
cout<<"Value of a is"<<a<<endl;

  return 0;
}*/
/*

int a ,b;
cout<<"Enter the value of a:";
cin>>a;

cout<<"Enter the value of b:";
cin>>b;
if(a>b){
    cout<<"value of a is greater than b";
}
if(b>a){
cout<<"b is greater than a";
}*/
// int a ,b ;
// cout<<"Enter the value of a:";
// cin>>a;

/*if(a>0){
    cout<<"a is positive";
}
else{
    if(a<0){
        cout<<"a is negative";
    }
    else{
        cout<<"value of a is zero";
    }
}
*/
/*
if(a>0)
{
    cout<<"a is positive";
}
else if(a<0)
{
    cout<<"a is negative";
}
else {
    cout<<" a is zero" ;

}
return 0;
}*/

// Output question
/*
#include<iostream>
using namespace std;
int main(){
    int a = 9;
    if(a==9)
    {
        cout<<"NINE";

    }
    if(a>0)
    {
        cout<<" a is greater than 0 or positive" ;

    }
    else
    {
        cout<<"negative" ;
    }

}*/

/*
#include<iostream>
using namespace std ;
int main(){
    int  a =2 ;
    int b=  a+1;
    if((a=3)==b)
    {
        cout<<a;
    }
    else
    {
        cout<<a+1;
    }
}*/
/*

#include<iostream>
using namespace std;
int main()
{
    int a =24 ;
    if(a>20){
        cout<<"Anurag";
    }
    else if(a==24){
        cout<<"Singh";
    }
    else {
        cout<<"Thakur" ;
    }
}*/

/*
//Homework Question
#include<iostream>
using namespace std ;
int main()
{
    char ch ;
    cin>>ch;
   if(ch >= 'a' && ch <= 'z'){
    cout << "lowercase";
}
else if(ch >= 'A' && ch <= 'Z'){
    cout << "uppercase";
}

    else if(ch>='0'&&ch<='9'){
        cout<<"digit";
    }

}*/

// print number 1 to n(while loop)
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}*/
// sum of number from 1 to n
/*
#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int i =1 ;
    int n;
    cin>>n;
    while (i<=n){
        sum = sum+i;
        i++;
    }
    cout<<sum;
}*/
// sum of all even number from 1 to n
/*
#include <iostream>
using namespace std;

int main()

{

    int sum = 0;

    int n;

    int i = 1;

    cin >> n;

    while (i <= n)
    {
        sum += i;
        i += 2;
    }

    cout << sum;
}*/

// given number is prime or not

/*#include<iostream>
using namespace std ;
int main(){

    int n ;
    cin>>n;
     int i =2 ;
    while(i<n){
        if(n%i==0){ //devide ho gaya to not prime

            cout<<"not prime for "<<i<<endl;

        }
        else
        {
            cout<<"prime for "<<i<<endl;
        }
        i++;
    }

}*/

// PATTERNS

/*
#include<iostream>
using namespace std ;
int main(){
    int  n;
    cin>> n;
    int i =1 ;
    while (i<=n)
    {
       int j =1 ;
       while (j<=n)
       {
        cout<<"*";
        j=j+1;
       }
       cout<<endl;
       i=i+1;
    }

}*/

// Pattern2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}