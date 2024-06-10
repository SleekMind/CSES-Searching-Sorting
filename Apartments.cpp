// Vinayak Sonar ॐ
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"
#define all(x) (x).begin(), (x).end()

void vinayak()
{
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int count = 0;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= d)
        {
            count++;
            i++;
            j++;
        }
        else
        {
            if (b[j] > a[i])
                i++;
            else
                j++;
        }
    }

    cout << count << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false); // don't use while debugging
    cin.tie(NULL);                    // don't use in interactive problems
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
        vinayak();
    return 0;
}