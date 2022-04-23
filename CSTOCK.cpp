#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int s,a,b,c;
        cin>>s>>a>>b>>c;

        float np = s+s*c*0.01;
        if(a<=np && b>=np)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}