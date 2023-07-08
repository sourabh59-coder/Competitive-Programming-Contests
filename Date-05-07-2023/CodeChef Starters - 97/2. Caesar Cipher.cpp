#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    string a,b,c;
    cin>>a>>b>>c;
    
    int ch1 = a[0];
    int ch2 = b[0];
    
    if(ch1>ch2) ch2 += 26;
    
    int diff = ch2-ch1;
    
    for(int i=0;i<n;i++)
    {
        int k = c[i];
        k += diff;
        if(k>122)
        {
            k -= 26;
        }
        
        char value = k;
        c[i] = value;
    }
    
    cout<<c<<endl;
}

signed main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        solve();
    }
    
    return 0;
}
