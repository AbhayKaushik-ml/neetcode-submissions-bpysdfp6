class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;

        for (int i = 0; i < nums.size(); i++) {
            int df = target - nums[i];

            if (m.find(df) != m.end()) {
                return {m[df], i};
            }

            m[nums[i]] = i;
        }

        return {};
    }
};
