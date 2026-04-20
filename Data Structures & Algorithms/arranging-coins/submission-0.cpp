class Solution {
public:
    int arrangeCoins(int n) {
        long long beg=1, end=n, res=0;
        while(beg<=end){
            long long mid= beg+(end-beg)/2;
            long long tc=(mid*(mid+1))/2;
            if(tc>n) end=mid-1;
            else{
                beg=mid+1;
                res=max(res,mid);
            }
        }
        return res;
    }
};