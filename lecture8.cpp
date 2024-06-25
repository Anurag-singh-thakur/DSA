/*#include<iostream>
using namespace std;
int main(){
  /*
   int num =2 ;
    cout<<endl ;
    switch (num)
    {
        case 1 :
        cout<<"num is 1"<<endl;
        break;
        case 2 :
        cout<<"num is 2"<<endl;
        break;
        default:
        cout<<"num is not 1 or 2"<<endl;
        break;
    }
  */
/*
char ch = '1' ;
int num = 1;

 cout<<endl ;
 switch (ch)
 {
     case 1:

     cout<<"num is 1"<<endl;
     break;

     case '1':
     switch(num){
         case 1:cout<<"switch inside switch";
     }
     case '2' :
     cout<<"num is 2"<<endl;
     break;
     default:
     cout<<"num is not 1 or 2"<<endl;
     break;
 }
 return 0;*/
/*}*/
//

// mini calculator
/*
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;

    char op;
    cout << "Enter the operationn you want to perform" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;
    default:
        cout << "Invalid operation";
        break;
    }
    return 0;
}*/

/// homework question

/*

#include <iostream>
using namespace std;

int main() {
    int amount = 1330;
    int note100 = 0, note50 = 0, note20 = 0, note1 = 0;

    switch (amount / 100) {
        case 0:
            break;
        default:
            note100 = amount / 100;
            amount %= 100;
    }

    switch (amount / 50) {
        case 0:
            break;
        default:
            note50 = amount / 50;
            amount %= 50;
    }

    switch (amount / 20) {
        case 0:
            break;
        default:
            note20 = amount / 20;
            amount %= 20;
    }

    note1 = amount;

    cout << "Notes of 100: " << note100 << endl;
    cout << "Notes of 50: " << note50 << endl;
    cout << "Notes of 20: " << note20 << endl;
    cout << "Notes of 1: " << note1 << endl;

    return 0;
}
*/

// Functions
/*
#include <iostream>
using namespace std;
int power(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    // power of (a,b )
    int a, b;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;
    cout<<endl;

    int ans = power(a, b);
    cout<<"Ans:"<< ans;
    int c, d;
    cout<<"Enter the value of c :";
    cin>>c;
    cout<<"Enter the value of d :";
    cin>>d;
    cout<<endl;

    int ans2 = power(c, d);
    cout<<"Ans:"<< ans;
    cout<<endl;

    cout<<"Ans2:"<< ans2;

    return 0;
}*/

// Another method for functions
/*
#include<iostream>
using namespace std;
int power()
{
    int a  ; int b;
    cout<<"Enter the value of a :";
    cin>>a ;
    cout<<"Enter the value of b :";
    cin>>b;
    cout<<endl;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans*a;
    }
    return ans;
}
int main(){
  int ans =   power();
  cout<<ans<<endl;

    return 0;
}*/
// even odd function
/*
#include <iostream>
using namespace std;
bool isEven(int a)
{ // 1 in case of even and 0 in odd

    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cin >> num;
    if(isEven(num)){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is odd" ;
    }
    return 0;
}*/

/// nCr function
/*

#include<iostream>
using namespace std;
int factorial(int n ){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i ;
    }
    return  fact;
}
int nCr(int n , int r)
{
    int num = ((factorial(n)));
    int den = ((factorial(r))*(factorial(n-r)));
    int ans = num/den ;
    return ans ;

}
int main(){
    int  n ;
    cout<<"Enter the value of n" ;
    cin>>n ;
    int r ;
    cin>>r;
    cout<<"Ans:"<<nCr(n,r)<<endl;

    return 0;
}*/

// counting function
/*
#include<iostream>
using namespace std;
void printCount(int n){
    if(n==0){
        return ;
    }
    for(int i = 1; i<=n ; i++){
        cout<<i<<endl;

    }
}
int main(){
    int a ;
     cout<<"Enter the value of a :";
    cin>>a;
    printCount(a);
    return 0;
}*/

// function for prime number
/*
#include <iostream>
using namespace std;
bool isPrime(int n)
{
   
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a;
    cout << "Enter the value of a :";
    cin >> a;
    if (isPrime(a))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime";
    }
    return 0;
}
*/


//Pass By Value
/*
#include<iostream>
using namespace std;

void dummy(int n ){
    n++;
    cout<<"n is:"<<n;
}
int main(){
    int n; 
    cout<<"ENter the value of n";
    cin>>n ;
    dummy(n); 
    return 0;
}*/
//output questions
/*
#include<iostream>
using namespace std;
void update(int a){
    a = a/2;
}
int main(){
    int a = 10 ;
    update(a);
    cout<<a; 
    return 0;
}*/

/*
#include<iostream>
using namespace std;
int update(int a){
    a -= 5; 
    return a;
}
int main(){
    int a = 15 ;
    update(a);
    cout<<a;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int update(int a){
    int ans = a*a ;
    return ans; 
}
int main(){
    int a = 14;
    a = update(a);
    cout<<a;
    return 0;
}*/

//homework questions 
