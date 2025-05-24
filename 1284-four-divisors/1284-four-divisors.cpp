class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int maxNum = *max_element(nums.begin(), nums.end());
        
        // Sieve to get all primes up to maxNum
        vector<bool> isPrime(maxNum + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= maxNum; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= maxNum; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int totalSum = 0;

        for (int num : nums) {
            int sum = 0;
            int count = 0;

            // Find all divisors of num
            for (int i = 1; i * i <= num; ++i) {
                if (num % i == 0) {
                    int j = num / i;

                    if (i == j) {
                        sum += i;
                        count += 1;
                    } else {
                        sum += i + j;
                        count += 2;
                    }

                    // Optimization: early exit if more than 4 divisors
                    if (count > 4) break;
                }
            }

            if (count == 4) {
                totalSum += sum;
            }
        }

        return totalSum;
    }
};
