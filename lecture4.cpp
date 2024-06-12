// pattern question 1
/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i =1 ;
    while (i<=n)
    {
        int j =1 ;
        while (j<=n)

        {
            cout<<j ;
            j++;
        }
     cout<<endl;
i++;
    }
    return 0;
}*/

// Pattern Question 2
/*#include <iostream>
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
            cout << n - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}*/

// Pattern question3
/*#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i = 1;
    int count =1 ;
    while (i<=n)
    {
        int  j =1;
        while (j<=n)
        {
            cout<<count <<" ";
            count++;
            j++;
        }
    cout<<endl;
    i++;
}
}*/
// Pattern Question4
/*#include<iostream>
using namespace std;
int main(){
    int n  ;
    cin >>n;
    int row =1 ;
    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<"*";
            col++;
    }
    cout<<endl;
    row++;

    }
}*/

// pattern5
/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    int row =1 ;
    while(row<=n )
    {
        int col =1 ;
        while (col<=row)
        {
            cout<<row;
            col++ ;
        }
        cout<<endl;
        row++;

    }
    return 0;
}*/

// pattern6

/*
#include<iostream>
using namespace std;
int main(){
    int n  ;
    cin >>n;
    int row =1 ;
    int count = 1;

    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<count;
            count++ ;
            col++;
    }
    cout<<endl;
    row++;

    }
}*/

// pattern7
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int row =1 ;

    while (row<= n)
    {
        int col =1 ;
        int val = row ;

        while (col<=row)
        {
            cout<<val;
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}*/
// Pattern 8

/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row =1 ;
while (row<=n)
{

    int col = 1 ;
    while(col<=row)
    {
        cout<<(row-col+1)<<" " ;
    col++;

    }
    cout<<endl;
    row++;
}

    return 0;
}*/

// pattern 9;
/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    int row =1 ;
    while (row<=n)
    {
        int col =1 ;
        while (col<=n)
        {
            char ch ='A'+row- 1;
            cout<<ch <<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}*/

// Pattern 10 ;
/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row =1 ;
    while (row<=n)
    {
        int col =1 ;
        while (col<=n)
        {
            char ch ='A'+col- 1;
            cout<<ch <<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}*/
// Pattern 11 ;
/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    char ch ='A' ;
    int row = 1;

    while(row<=n)
    {
        int col =1 ;
        while(col<=n)
        {
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}*/
// Pattern 12;
/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row = 1 ;
    while(row<=n)
    {
        int col =1 ;
        while(col<=n)
        {
          char   ch = 'A'+row+col-2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}*/
// Pattern 13 ;
/*
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row= 1;
    while(row<=n)
    {
        int col =1;
        while(col<=row)
        {
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            col++;

        }
        cout<<endl;
        row++;
    }
    return 0;
}*/
// Pattern 14 ;
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = ('A' + row + col - 2);
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}*/
// Pattern 15 ;
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + n - row;
        while (col <= row)
        {
            cout << start << " ";
            start++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}*/
// Pattern 16 ;
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}*/
// Pattern 17 ;
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int row = 1;
    while (row <= n) {
        int space = n - row;

        // Print leading spaces
        while (space > 0) {
            cout << " ";
            space--;
        }

        // Print numbers in increasing order
        int j = 1;
        while (j <= row) {
            cout << j;
            j++;
        }

        // Print numbers in decreasing order
        int start = row - 1;
        while (start >= 1) {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }

    return 0;
}

// Pattern 18 ;
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n ;
//      cin>>n;
//      return 0;
//  }