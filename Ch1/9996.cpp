#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string s;
    cin >> s;

    auto it = find(s.begin(), s.end(), '*');

    if (it != s.end())
    {
        int idx = it - s.begin();

        string first = s.substr(0, idx);
        string suffix = s.substr(idx + 1);

        for (int i = 0; i < N; i++)
        {
            string ss;
            cin >> ss;

            if (ss.size() < first.size() + suffix.size())
            {
                cout << "NE\n";
                continue;
            }

            if (ss.substr(0, first.size()) == first &&
                ss.substr(ss.size() - suffix.size(), suffix.size()) == suffix)
            {
                cout << "DA\n";
            }
            else
            {
                cout << "NE\n";
            }
        }
    }
}
