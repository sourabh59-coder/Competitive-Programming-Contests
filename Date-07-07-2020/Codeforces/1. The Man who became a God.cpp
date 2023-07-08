#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        vector<int> v(n);
        for(int i=0;i<n;i++)    cin>>v[i];
        
        vector<int> vec;
        for(int i=1;i<n;i++)
        {
            vec.push_back(abs(v[i]-v[i-1]));
        }
        sort(vec.begin(),vec.end());
        int ans = 0;
        for(int i=0;i<n-k;i++)
        {
            ans += vec[i];
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
