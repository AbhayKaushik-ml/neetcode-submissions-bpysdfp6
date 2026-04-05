class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort
        // if the l is equalt o previous one skip it
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
         for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) break; // already sorted array so if nums[i]>0
                                    // then next is alredy greater, so sum!=0
            if (i > 0 && nums[i] == nums[i - 1]) continue; // duplicated element
            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if(sum <0) l+=1;
                else if (sum >0){ r-=1;}
                else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                 }
            }
         }
         return res;
    }    
};
