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
        
        string s;
        cin>>s;
        int ans = 0;
        stack<int> st;
        bool temp = false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                temp = false;
                while(!st.empty())
                {
                    st.pop();
                }
            }
            else if(s[i]==')')
            {
                if(temp==true)
                {
                    st.push(1);
                }
            }
            if(s[i]==':')
            {
                if(temp && !st.empty())
                {
                    ans++;
                    while(!st.empty())
                    {
                        st.pop();
                    }
                }
                else
                {
                    temp = true;
                }
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
