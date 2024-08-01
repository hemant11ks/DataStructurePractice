#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void func(int N, int Sum){

 if(N<1){
    cout<<Sum;
    return;
 }

func(N-1, Sum + N);

}


int main()
{
    int N = 3; // Sum 6
    func(N,0);
 return 0;
}