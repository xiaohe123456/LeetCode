#include<vector>

#include<iostream>

using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for (int i = 0; i <= nums.size() - 2; ++i)
        {
            for (int j = i + 1; j <= nums.size() - 1; ++j)
            {
                if (target == nums[i] + nums[j])
                {
                    res.push_back(i);
                    res.push_back(j);
                    cout << "[" << i << "," << j << "]" << endl;
                }
            }
        }
        return res;
    }
};

void main()
{
    Solution s;
    vector<int> num_1 = { 3, 3 };
    int target = 6;
    s.twoSum(num_1, target);
  }