#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;

        for (int i = 0; i < s.size(); i++)
        {
            smap[s[i]]++;
            tmap[t[i]]++;
        }

        if (smap.size() != tmap.size())
            return false;

        for (int i = 0; i < smap.size(); i++)
        {
            if (smap[i] != tmap[i])
                return false;
        }
        return true;
    }
};