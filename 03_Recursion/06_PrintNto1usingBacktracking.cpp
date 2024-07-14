#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 3, 2, 1
// Dont use fun(N-1, N);

void fun(int i, int N){
    if(i>N) return;

    fun(i+1, N);
    cout<<i<<endl;
}

int main()
{
    fun(1,3);

 return 0;
}