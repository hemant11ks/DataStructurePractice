#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 3 => 3*2*1     = 6
// 5 => 5*4*3*2*1 = 120

int fact(int N){
  if(N==1) return 1;

  return N*fact(N-1);

}

int main()
{

    int N = 5;
    cout<<fact(N);
 return 0;
}