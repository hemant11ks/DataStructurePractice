#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int N, int ans){
    if(N==1){
        cout<<ans;
        return 1; 
    }

    fact(N-1, ans*N);


}

int main()
{
    int N = 5;
    fact(N, 1);
  return 0;
}