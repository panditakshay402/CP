#include <bits/stdc++.h>
using namespace std;


// THIS IS CODE PRINT NAME FOR N TIME


void f(int i,int n){
    if(i>n)
    {return;}
    else
    {
        cout<<"AKSHAY";

        f( i+1, n);
    }

}
int main(){

int n;
    cin>>n ;

   f(1,n);
   
   
   }