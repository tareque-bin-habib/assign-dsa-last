#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        pq.push(value);
    }

    cin >> m;
    while (m--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int s;
            cin >> s;
            pq.push(s);
            cout << pq.top() << endl;
        }
        else if (command == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}