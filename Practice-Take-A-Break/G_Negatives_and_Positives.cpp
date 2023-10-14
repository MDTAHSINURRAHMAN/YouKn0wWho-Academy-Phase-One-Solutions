#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define isinf = 0x3f3f3f3f;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fl(i, m, n) for (int i = m; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define vr(v) v.begin(), v.end()
#define HERE ios_base::sync_with_stdio(false);
#define WE cin.tie(NULL);
#define GO cout.tie(NULL);
using namespace std;

/*
MD Tahsinur Rahman
Department of Computer Science and Engineering
Khulna University of Engineering & Technology

In life everybody has a turn back moment. You have the moment where you can go forward or you can give up. But the thing you have to keep in mind before you give up is that if you give up, the guarantee is it will never happen. That's the guarantee it will never happen under the sun! THE ONLY WAY THE POSSIBILITY REMAINS, THAT IT CAN BE HAPPEN IS IF YOU NEVER GIVE UP NO MATTER WHAT.
*/

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll neg_cnt = 0;
    ll sum = 0;
    fl(i, 0, n)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            neg_cnt++;
            v[i] = abs(v[i]);
        }
    }

    sort(v.begin(), v.end());
    if (neg_cnt & 1)
        v[0] = -1 * v[0];
    // cout << neg_cnt << '\n';
    for (auto x : v)
    {
        sum += x;
    }
    cout << sum << '\n';
}

int main()
{
    HERE WE GO
        ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}