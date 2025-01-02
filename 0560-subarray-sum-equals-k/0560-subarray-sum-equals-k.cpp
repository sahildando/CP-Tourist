class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
          unordered_map<int, int> mp; // Corrected `unordered map` to `unordered_map`
        int sum = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            // If the cumulative sum equals `k`, increment the count
            if (sum == k) 
                count++;

            // If (sum - k) exists in the map, add its frequency to the count
            if (mp.find(sum - k) != mp.end()) 
                count += mp[sum - k];

            // Update the map with the current cumulative sum
            mp[sum]++;
        }

        return count;
    }
};
        
