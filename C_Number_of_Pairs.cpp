// Vinayak Sonar ॐ
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"
#define all(x) (x).begin(), (x).end()

void vinayak()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        int k = lower_bound(v.begin() + i + 1, v.end(), l - v[i]) - v.begin();
        int q = upper_bound(v.begin() + i + 1, v.end(), r - v[i]) - v.begin();

        ans = ans + q - k;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false); // don't use while debugging
    cin.tie(NULL);                    // don't use in interactive problems
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        vinayak();
    return 0;
}