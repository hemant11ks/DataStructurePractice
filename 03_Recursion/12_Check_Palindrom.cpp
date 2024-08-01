#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i,string &str, int n){
    if(i>=n/2) return true;

    if(str[i] != str[str.size()-i-1]) return false;
    
    return checkPalindrome(i+1, str, n );


}

int main()
{
    string str = "maadam";
    int n = str.size();
    cout<<checkPalindrome(0,str, n);

    return 0;
}