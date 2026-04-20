class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0, r=nums.size()-1, res= nums[0];
        while(l<=r){

        if(nums[l]<nums[r]){
            res = min(res,nums[l]);// subset checker + first no rotation
            break;
        }

        int mid=l+(r-l)/2;
        res=min(res, nums[mid]);
        if(nums[mid]>=nums[l]) l=mid+1; //discard left(already sorted)
        else r=mid-1;  //discard right,we found the cut
    } 
    return res;
    }
};
