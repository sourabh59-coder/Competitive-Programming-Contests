#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int> a(3),b(3);
        for(int i=0;i<3;i++)    cin>>a[i];
        for(int i=0;i<3;i++)    cin>>b[i];
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int s1(0),s2(0);
        
        s1 += a[2]+a[1];
        s2 += b[2]+b[1];
        
        if(s1>s2)
        {
            cout<<"Alice"<<endl;
        }
        else if(s1<s2)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Tie"<<endl;
        }
    }
    
    return 0;
}
