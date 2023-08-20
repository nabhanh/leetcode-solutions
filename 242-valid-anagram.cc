#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, long> s_chars;
        unordered_map<char, long> t_chars;

        if (t.length() != s.length())
            return false;

        for (long i = 0; i < s.length(); i++)
        {
            auto location = s_chars.find(s[i]);
            if (location != s_chars.end())
            {
                location->second = location->second + 1;
                continue;
            }

            s_chars.insert(make_pair(s[i], 1));
        }
        for (long i = 0; i < t.length(); i++)
        {
            auto location = t_chars.find(t[i]);
            if (location != t_chars.end())
            {
                location->second = location->second + 1;
                continue;
            }

            t_chars.insert(make_pair(t[i], 1));
        }

        if (t_chars.size() != s_chars.size())
            return false;

        for (auto x : s_chars)
        {
            auto element = t_chars.find(x.first);
            if (element == t_chars.end())
                return false;
            if (element->second != x.second)
                return false;
        }

        return true;
    }
};