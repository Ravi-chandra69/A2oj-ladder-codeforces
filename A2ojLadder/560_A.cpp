#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MOD 1000000007
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int ans = 0, i;
    for (i = n - 1; i > n - 1 - y; i--)
    {
        if (s[i] != '0')
            ans++;
    }
    if (s[i] != '1')
        ans++;
    i--;
    for (i; i > n - 1 - x; i--)
    {
        if (s[i] != '0')
            ans++;
    }
    cout << ans;

    return 0;
}