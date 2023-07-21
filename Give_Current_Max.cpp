#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

class Compare
{
public:
    bool operator()(Student student_1, Student student_2)
    {
        if (student_1.marks != student_2.marks)
            return student_1.marks < student_2.marks;
        return student_1.roll > student_2.roll;
    }
};

int main()
{
    int n, m;
    cin >> n;

    priority_queue<Student, vector<Student>, Compare> students;

    for (int i = 0; i < n; ++i)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students.push({name, roll, marks});
    }

    cin >> m;

    while (m--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            students.push({name, roll, marks});
            cout << students.top().name << " " << students.top().roll << " " << students.top().marks << endl;
        }
        else if (command == 1)
        {
            if (!students.empty())
            {
                cout << students.top().name << " " << students.top().roll << " " << students.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!students.empty())
            {
                students.pop();
            }
            if (!students.empty())
            {
                cout << students.top().name << " " << students.top().roll << " " << students.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}