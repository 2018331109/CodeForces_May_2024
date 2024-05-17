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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 1, right = n, ans = n;
    while (left <= right)
    {
        int mid = (left + right) >> 1;
        vector<int> base(30, 0);
        int sum = 0;

        // Initializing the base array and sum for the first window
        for (int i = 0; i < mid; i++)
        {
            sum |= arr[i];
            for (int k = 0; k < 30; k++)
            {
                if (arr[i] & (1 << k))
                {
                    base[k]++;
                }
            }
        }

        bool valid = true;

        // Check initial window
        int cur = 0;
        for (int k = 0; k < 30; k++)
        {
            if (base[k] > 0)
            {
                cur |= (1 << k);
            }
        }
        if (cur != sum)
        {
            valid = false;
        }

        // Sliding the window
        for (int i = mid; i < n && valid; i++)
        {
            // Remove arr[i - mid] from the window
            for (int k = 0; k < 30; k++)
            {
                if (arr[i - mid] & (1 << k))
                {
                    base[k]--;
                }
            }

            // Add arr[i] to the window
            for (int k = 0; k < 30; k++)
            {
                if (arr[i] & (1 << k))
                {
                    base[k]++;
                }
            }

            // Calculate the current OR for the window
            cur = 0;
            for (int k = 0; k < 30; k++)
            {
                if (base[k] > 0)
                {
                    cur |= (1 << k);
                }
            }

            // Check if the current OR matches the required sum
            if (cur != sum)
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << ans << endl;
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

