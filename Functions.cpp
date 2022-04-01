#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
        int z=a;
        if(z<b)
        {
            z=b;
        }
        if(z<c)
        {
            z=c;
        }
        if(z<d)
        {
            z=d;
        }
        return z;   
}

int main() {
    int a, b, c, d;
    int max_of_four(int,int,int,int);
    scanf("%d %d %d %d", &a, &b, &c, &d);
    //we can also use pre-defined max function 
    //int ans = max(a, max(b, max(c, d)));
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
