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
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            
            if(x>y)
            {
                ans++;
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
