class Solution
{
public:
    void generate(vector<int> nums, vector<int> map, vector<vector<int>> &ans, vector<int> temp)
    {
        if (temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (map[i] == 0)
            {
                map[i] = 1;
                temp.push_back(nums[i]);
                generate(nums, map, ans, temp);
                map[i] = 0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> map(n, 0);
        vector<int> temp;
        generate(nums, map, ans, temp);
        return ans;
    }
};