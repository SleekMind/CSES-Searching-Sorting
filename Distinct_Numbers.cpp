// Vinayak Sonar ॐ
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"
#define all(x) (x).begin(), (x).end()

void vinayak()
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0, a; i < n; i++)
    {
        cin >> a;
        st.insert(a);
    }
 
    cout << st.size();
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