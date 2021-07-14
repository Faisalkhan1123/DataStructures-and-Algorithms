class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size = nums.size();
        int start=0, end=size-1;
        vector<int> res(size, 0);
        for(int i=0;i<size; i++) {
            if(nums[i]%2==1) {
                res[end--]=nums[i];
            }
                else{
                    res[start++]=nums[i];
    }
        }
        return res;
    }
};
