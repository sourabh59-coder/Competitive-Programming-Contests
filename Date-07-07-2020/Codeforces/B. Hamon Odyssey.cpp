#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> v(n);
        for(int i=0;i<n;i++)    cin>>v[i];
        
        int ans = 0;
        int val = 0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                ans++;
                val = 0;
            }
            else
            {
                if(val==0)
                {
                    val = v[i];
                }
                else
                {
                    val &= v[i];
                    if(val==0)
                    {
                        ans++;
                    }
                }
            }
        }
        
        if(ans==0)  ans++;
        
        cout<<ans<<endl;
    }
    
    return 0;
}
