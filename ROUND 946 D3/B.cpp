#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;


void solve()
{
    vector<int>v(26, 0);
    string s;
    int k;
    cin>>k;
    cin>>s;
    string alp;
    for(auto it:s)
    {
        if(v[it-'a']==0)
        {
            v[it-'a']++;
            alp+=it;
        }
    }
    sort(alp.begin(), alp.end());
    map<char, char>mp;
    int n=alp.size();
    for(int i=0; i<=(n/2); i++)
    {
        mp[alp[i]]=alp[n-i-1];
        mp[alp[n-i-1]]=alp[i];
    }
    string ans;
    for(auto it:s)
    {
        ans+=mp[it];
    }
    cout<<ans<<endl;

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

