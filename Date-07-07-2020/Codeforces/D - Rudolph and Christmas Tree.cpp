#include <bits/stdc++.h>
#define int long long
using namespace std;
// #define double float

signed main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,d,h;
        cin>>n>>d>>h;
        
        double nume = (d*h);
        double area = static_cast<double>(nume)/2;
        area = std::round(area * 1e6) / 1e6;
        long double ans = n*area;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            int diff = v[i+1]-v[i];
            if(diff<h)
            {
                diff = h-diff;
                double numerator = (diff*d*diff);
                double denominator = (h*2);
                
                double val = static_cast<double>(numerator)/(denominator);
                val = std::round(val * 1e6) / 1e6;
                ans -= val;
            }
        }
        
        cout<<setprecision(13)<<ans<<endl;
    }
    
    return 0;
}
