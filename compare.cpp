#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        int x1 = 0, x2 = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == 'X')
                x1++;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == 'X')
                x2++;
        }
        if (s1[s1.size() - 1] == 'L')
        {
            if (s2[s2.size() - 1] == 'L')
            {
                if (x1 > x2)
                    cout << ">\n";
                if (x1 == x2)
                    cout << "=\n";
                if (x1 < x2)
                    cout << "<\n";
            }
            if (s2[s2.size() - 1] == 'M' || s2[s2.size() - 1] == 'S')
                cout << ">\n";
            continue;
        }
        if (s1[s1.size() - 1] == 'M')
        {
            if (s2[s2.size() - 1] == 'M')
                cout << "=\n";
            if (s2[s2.size() - 1] == 'S')
                cout << ">\n";
            if (s2[s2.size() - 1] == 'L')
                cout << "<\n";
            continue;
        }
        if (s1[s1.size() - 1] == 'S')
        {
            if (s2[s2.size() - 1] == 'S')
            {
                if (x1 > x2)
                    cout << "<\n";
                if (x1 == x2)
                    cout << "=\n";
                if (x1 < x2)
                    cout << ">\n";
            }
            if (s2[s2.size() - 1] == 'M' || s2[s2.size() - 1] == 'L')
                cout << "<\n";
            continue;
        }
        if (s2[s2.size() - 1] == 'L')
        {
            if (s1[s1.size() - 1] == 'L')
            {
                if (x1 > x2)
                    cout << ">\n";
                if (x1 == x2)
                    cout << "=\n";
                if (x1 < x2)
                    cout << "<\n";
            }
            if (s1[s1.size() - 1] == 'M' || s1[s1.size() - 1] == 'S')
                cout << ">\n";
            continue;
        }
        if (s2[s2.size() - 1] == 'M')
        {
            if (s1[s1.size() - 1] == 'M')
                cout << "=\n";
            if (s1[s1.size() - 1] == 'S')
                cout << ">\n";
            if (s1[s1.size() - 1] == 'L')
                cout << "<\n";
            continue;
        }
        if (s2[s2.size() - 1] == 'S')
        {
            if (s1[s1.size() - 1] == 'S')
            {
                if (x1 > x2)
                    cout << "<\n";
                if (x1 == x2)
                    cout << "=\n";
                if (x1 < x2)
                    cout << ">\n";
            }
            if (s1[s1.size() - 1] == 'M' || s1[s1.size() - 1] == 'L')
                cout << "<\n";
            continue;
        }
    }
}
