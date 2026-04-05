#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int flag=0;
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i =0;i<n;i++){
            if(mp[nums[i]]>1){
                flag+=1;
                break;
            }
        }
        if(flag==0) return false;
        else if(flag==1) return true;
    }
};