#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ind=0, i=0;
    while(i<n and (s[i]>='0' and s[i]<='9'))
    {
        i++;
    }
    if(i==n)
    {
        string ss=s;
        sort(ss.begin(), ss.end());
        if(s==ss)
        {
            yes;
            return;
        }
        no;
        return;
    }
    ind=i;
    for(int i=1; i<ind; i++)
    {
        if(s[i]<s[i-1])
        {
            no;
            return;
        }
    }
    for(int i=ind+1; i<n; i++)
    {
        if((s[i]>='0' and s[i]<='9') or s[i]<s[i-1])
        {
            no;
            return;
        }
    }
    yes;
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

