#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // time complexity: O(nlogn) space complexity: O(1)
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return true;
        }

        return false;
    }

    bool containsDuplicateUnorderedSet(vector<int> &nums)
    {
        // time complexity: O(n) space complexity: O(n)
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(nums[i]) != s.end())
                return true;
            s.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> nums = {1, 2, 3, 1};
    cout << s.containsDuplicate(nums) << endl;
    return 0;
}