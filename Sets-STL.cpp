#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    int q,ch,x;
    cin>>q;
    for (int i=0; i < q ; i++) 
    {
    cin>>ch;
    switch(ch)
    {
        case 1: cin>>x;
                s.insert(x);
                break;
        case 2: cin>>x;
                s.erase(x);
                break;
        case 3: cin>>x;
                cout<<(s.find(x)==s.end()?"No":"Yes")<<endl;
                break;
    }
    }
    return 0;
}
