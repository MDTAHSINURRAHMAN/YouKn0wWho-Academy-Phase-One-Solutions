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
    int num_rot;
    cin >> num_rot;
    int a[num_rot];
    fl(i, 0, num_rot) cin >> a[i];
    for (int mask = 0; mask < (1 << num_rot); ++mask)
    {
        int rotation = 0;
        for (int i = 0; i < num_rot; ++i)
        {
            if ((mask >> i) & 1)
            {
                rotation += a[i];
            }
            else
            {
                rotation -= a[i];
            }
            rotation = (rotation + 360) % 360;
        }
        if (rotation == 0)
        {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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