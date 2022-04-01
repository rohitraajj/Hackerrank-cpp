#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    string s[9]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        if(a>9)
        {
          if(i%2==0)
          {
              cout<<"even"<<endl;
              
          } 
          else 
          {
              cout<<"odd"<<endl;
              
          }
          
        }
        else if(i==a)
        {
            cout<<s[i-1]<<endl;
            a++; 
        }
        
    }
    return 0;
}
