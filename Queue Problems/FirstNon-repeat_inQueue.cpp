#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class sloution
{
public:
    string FirstNonRepeating(string s)
    {
        map<char, int> m;
        queue<char> q;
        string ans = "";

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            m[ch]++;

            q.push(ch);

            while (!q.empty())
            {
                if (m[q.front()] > 1)
                {
                    q.pop();
                }
                else
                {
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};

int main()
{
    string s;
    cin >> s;
    sloution obj;

    string ans = obj.FirstNonRepeating(s);
    cout << ans << " ";
    return 0;
}