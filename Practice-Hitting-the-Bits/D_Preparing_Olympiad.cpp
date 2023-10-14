#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define isinf = 0x3f3f3f3f;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fl(i, m, n) for (int i = m; i < n; ++i)
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
    int num_prb, at_least, at_most, dfrnce;
    cin >> num_prb >> at_least >> at_most >> dfrnce;
    int cnt_difficulty[num_prb];
    for (int i = 0; i < num_prb; ++i)
    {
        cin >> cnt_difficulty[i];
    }
    int num_ways = 0;
    for (int mask = 0; mask < (1 << num_prb); ++mask)
    {
        int tot_diff = 0, min_diff = 1e9, max_diff = 0, prb_cnt = 0;
        for (int i = 0; i < num_prb; ++i)
        {
            if ((mask >> i) & 1)
            {
                tot_diff += cnt_difficulty[i];
                min_diff = min(min_diff, cnt_difficulty[i]);
                max_diff = max(max_diff, cnt_difficulty[i]);
                prb_cnt++;
            }
        }
        if (tot_diff >= at_least && tot_diff <= at_most && (max_diff - min_diff) >= dfrnce && prb_cnt >= 2)
            num_ways++;
    }
    cout << num_ways << '\n';
}

int main()
{
    HERE WE GO
        ll tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}