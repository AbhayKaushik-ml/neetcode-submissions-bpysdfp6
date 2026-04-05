class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res =0;
        int i=0;
        int j=heights.size()-1;
        while(i<j){
            
            if(heights[i]<heights[j]){
                int temp = heights[i]*(j-i);
                if(temp>res) res = temp;
                i++;
            }
            else{
                int temp = heights[j]*(j-i);
                if(temp>res) res = temp;
                j--;
            }
            
        }
        return res;
    }
};
