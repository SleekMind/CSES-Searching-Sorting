// Vinayak Sonar ॐ
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"
#define all(x) (x).begin(), (x).end()

void vinayak()
{
    int n, m;
    cin >> n >> m;

    multiset<int> st;
    vector<int> mp(m);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a); 
    }

    for (int i = 0; i < m; i++)
        cin >> mp[i];

    for (int i = 0; i < m; i++)
    {
        auto it = st.upper_bound(mp[i]);
        if (it != st.begin())
        {
            cout << *(--it) << endl;
            st.erase(it);
        }
        else
            cout << -1 << endl;
    }
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