#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    multiset<ll> s;
    for(int i=0; i<n; i++)
    {
        int t;
        cin >> t;
        s.insert(t);
    }
    for(int i=0; i<m; i++)
    {
        int t;
        cin >> t;
        auto it = s.upper_bound(t);
        if(it == s.begin())
            cout << -1 << "\n";
        else
        {
            --it;
            cout << *it << "\n";
            s.erase(it);
        }
    }

    return 0;
}