#include <iostream>
using namespace std;
char toLowercase(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else{
        char temp = ch - 'A'+ 'a';
    }
}
bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (a[s] != a[e])
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true; // If all characters are same, it's a palindrome
}
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter Your Name" << endl;
    cin >> name;
    // name[2] = '\0';
    cout << "Your name is " << name << endl;
    // cin stops execution when we enter /tab / space or newline
    int len = getLength(name);
    cout << "length: " << getLength(name) << endl;
    cout << "swapped ";
    reverse(name, getLength(name));
    cout << name << endl;
    cout << "checking palindarom : " << checkPalindrome(name, len) << endl;


    cout<<"CHARACTER"<<toLowercase('a')<<endl;
    cout<<"CHARACTER"<<toLowercase('C')<<endl;
    return 0;
}


//to check whether the given string is valid palindrome or not
/*
#include <bits/stdc++.h>
#include <cctype> // for tolower and isalnum

bool checkPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;
    
    while (start <= end) {
        // Skip non-alphanumeric characters
        while (start <= end && !isalnum(s[start])) {
            start++;
        }
        while (start <= end && !isalnum(s[end])) {
            end--;
        }
        
        if (start > end) {
            break;
        }
        
        // Convert to lowercase for case-insensitive comparison
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        
        start++;
        end--;
    }
    
    return true;
}*/