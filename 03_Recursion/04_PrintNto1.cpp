#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 3 2 1

void fun(int i, int N){
   if(i<0) return;

   cout<<i<<endl;
   fun(i-1,N);
}

int main()
{

    fun(3,3);
 return 0;
}