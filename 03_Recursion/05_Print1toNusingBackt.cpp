#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 1, 2, 3, 4
// Dont use fun(i+1, N)

void fun(int i, int N){

    if(i<1) return;

    fun(i-1, N);
    cout<<i<<endl;
}

int main()
{
    fun(3,3);
 return 0;
}