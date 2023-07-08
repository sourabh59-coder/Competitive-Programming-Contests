#include <bits/stdc++.h>
#define int long long
using namespace std;

string solve()
{
        string a,b,c;
        cin>>a>>b>>c;
        
        string ans = "DRAW";
        bool flag = true;
        for(int i=1;i<a.size();i++)
        {
            if(a[0]!=a[i])
            {
                flag = false;
            }
        }
        if(flag==true && a[0]!='.')
        {
            ans = a[0];
            return ans;
        }
        
        flag = true;
        for(int i=1;i<b.size();i++)
        {
            if(b[0]!=b[i])
            {
                flag = false;
            }
        }
        if(flag==true && b[0]!='.')
        {
            ans = b[0];
            return ans;
        }
        
        flag = true;
        for(int i=1;i<c.size();i++)
        {
            if(c[0]!=c[i])
            {
                flag = false;
            }
        }
        if(flag==true && c[0]!='.')
        {
            ans = c[0];
            return ans;
        }
        
        if(a[0]==b[0] && a[0]==c[0] && a[0]!='.')
        {
            ans = a[0];
            return ans;
        }
        
        if(a[1]==b[1] && a[1]==c[1] && a[1]!='.')
        {
            ans = a[1];
            return ans;
        }
        
        if(a[2]==b[2] && a[2]==c[2] && a[2]!='.')
        {
            ans = a[2];
            return ans;
        }
        
        if(a[0]==b[1] && a[0]==c[2] && a[0]!='.')
        {
            ans = a[0];
            return ans;
        }
        
        if(a[2]==b[1] && a[2]==c[0] && a[2]!='.')
        {
            ans = a[2];
            return ans;
        }
        
        return ans;
}

signed main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        cout<<solve()<<endl;
    }
    
    return 0;
}
