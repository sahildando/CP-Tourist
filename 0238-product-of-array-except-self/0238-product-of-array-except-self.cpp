class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long prod = 1;
        int zero = 0;
        vector<int> ans;
        for (auto num:nums){
            if(num!=0) prod=prod*num;
            else zero++;
        }

        for (auto num:nums){
            if(zero>1) ans.push_back(0);
            else if(num!=0){
                if(zero>0) ans.push_back(0);
                else ans.push_back(prod/num);
            }
            else ans.push_back(prod);
        }
        return ans;
        
    }
};