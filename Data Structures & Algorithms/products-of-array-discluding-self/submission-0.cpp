class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre, suff;

		for (int i = 0; i < nums.size(); i++) {
            if(i==0) 
                pre.push_back(1);
            else 
                pre.push_back(pre[i-1]*nums[i-1]);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0)
                suff.push_back(1);
            else
                suff.push_back(suff[i-1] * nums[nums.size()- i ]);
        }
        for (int i = 0; i < nums.size(); i++) {
            pre[i]= pre[i]*suff[nums.size()- i-1];
        }
    return pre;
    }
};
