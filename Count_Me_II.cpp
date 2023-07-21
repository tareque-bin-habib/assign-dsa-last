#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int max;
        int count = 0;
        map<int, int> nm;

        for (int i = 0; i < n; i++)
        {
            nm[ar[i]]++;
            if (nm[ar[i]] > count)
            {
                count = nm[ar[i]];
                max = ar[i];
            }

            if (ar[i] > max && nm[ar[i]] == count)
            {
                max = ar[i];
            }
        }
        cout << max << " " << count << endl;
    }

    return 0;
}
