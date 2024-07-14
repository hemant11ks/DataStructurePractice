#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(int i, int N){
   if(i>N){return;}
   
   cout<<i<<endl;
   fun(i+1,N);

}

int main()
{
    fun(1,3);
 return 0;
}