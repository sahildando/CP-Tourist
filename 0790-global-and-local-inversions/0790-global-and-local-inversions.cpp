class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {

        int N = nums.size();
        int floor = N;

        for (int i=N-1; i>=2; i--)
        {
            floor = min(floor, nums[i]);

            if(nums[i-2] > floor)
            {
                return false;
            }
        }

        return true;
    }
};