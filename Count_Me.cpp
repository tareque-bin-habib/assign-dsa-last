#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        string max;

        int count = 0;
        stringstream ss(s);
        string text;
        map<string, int> nm;

        while (ss >> text)
        {
            nm[text]++;

            if (nm[text] > count)
            {
                max = text;
                count = nm[text];
            }
        }
        cout << max << " " << count << endl;
    }

    return 0;
}
