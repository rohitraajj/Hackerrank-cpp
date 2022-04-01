#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    string ar[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    if(a>9)
    {
        cout<<ar[0];
    }
    else
    {
      cout<<ar[a];
    }
    //use of else-if ladder
      /*  if(a==1)
        {
            cout<<"one";
        }
        else if(a==2)
        {
            cout<<"two";
        }
        else if(a==3)
        {
            cout<<"three";
        }
        else if(a==4)
        {
            cout<<"four";
        }
        else if(a==5)
        {
            cout<<"five";
        }
        else if(a==6)
        {
            cout<<"six";
        }
        else if(a==7)
        {
            cout<<"seven";
        }
        else if(a==8)
        {
            cout<<"eight";
        }
        else if(a==9)
        {
            cout<<"nine";
        }
        else
        {
            cout<<"Greater than 9";
        }
    */
}
