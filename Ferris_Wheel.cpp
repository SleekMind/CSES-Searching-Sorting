// Vinayak Sonar ॐ
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"
#define all(x) (x).begin(), (x).end()

void vinayak()
{
    int n, x;
    cin >> n >> x;

    vector<int> w(n);

    for (int i = 0; i < n; i++)
        cin >> w[i];

    sort(w.begin(), w.end());
    int count = 0; // number of 2 pairs
    int i = 0;
    int j = n - 1;

    // logic here is sort the values
    // and try to pair min-max values together
    // this ensures we get rid of smaller values in pair of some other
    // other values will take independent gondola 
    while (i < j)
    {
        if (w[i] + w[j] <= x)
        {
            i++;
            j--;
            count++;
        }
        else
        {
            j--;
        }
    }

    cout << n - count << endl;
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