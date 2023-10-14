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
int n, m, k;

bool can_be_friends(int a, int b)
{
    int dif_bit_cnt = 0;
    dif_bit_cnt = __builtin_popcount(a ^ b);
    return dif_bit_cnt <= k;
}

void solve()
{
    cin >> n >> m >> k;
    int arr[m + 1];
    for (int i = 0; i <= m; ++i)
    {
        cin >> arr[i];
    }
    int friends = 0;
    for (int i = 0; i < m; ++i)
    {
        friends += can_be_friends(arr[i], arr[m]);
    }
    cout << friends << '\n';
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