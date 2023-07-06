#include <bits/stdc++.h>
#define int long long
using namespace std;

void PreComp(vector<int> &vec,int n)
{
    for(int i=n-1;i>=2;i--)
    {
        int val = (i)*(i-1)/2;
        
        vec.push_back(val);
    }
    
    for(int i=1;i<vec.size();i++)
    {
        vec[i] += vec[i-1];
    }
}

void solve()
{
    int n,q;
    cin>>n>>q;
    
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    
    sort(v.begin(),v.end());
    vector<int> vec;
    vec.clear();
    PreComp(vec,n);
    
    // for(int i=0;i<vec.size();i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;
    
    while(q--)
    {
        int k;
        cin>>k;
        
        auto it = lower_bound(vec.begin(),vec.end(),k)-vec.begin();
        
        cout<<v[it]<<endl;
    }
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
