// User function Template for C++
class Solution {
  public:
    vector<int> sieveOfEratosthenes(int n) {
        // Step 1: Create a boolean vector for marking primes
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime

        // Step 2: Sieve logic
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Step 3: Collect all primes
        vector<int> result;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                result.push_back(i);
            }
        }

        return result;
    }
};
