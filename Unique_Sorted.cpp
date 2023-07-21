#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> a;
        int s;
        cin >> s;

        while (s--)
        {
            int n;
            cin >> n;
            a.insert(n);
        }

        vector<int> b;
        for (auto it = a.begin(); it != a.end(); it++)
        {
            b.push_back(*it);
        }

        reverse(b.begin(), b.end());

        for (auto value : b)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}