
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int func(int N){
    
    if(N==0){
      return 0;
    }

    return N + func(N-1);
}

int main()
{
    int N = 3; // Sum = 6
    cout<<func(N);
 return 0;
}