class Solution {
public:
    const int M = 1e9 + 7;

    long long findPower(long long a, long long b) {
        if (b == 0) return 1;

        long long half = findPower(a, b / 2);
        long long result = (half * half) % M;

        if (b % 2 == 1)
            result = (result * a) % M;

        return result;
    }

    int countGoodNumbers(long long n) {
        long long evenPos = (n + 1) / 2; 
        long long oddPos = n / 2;       

        long long goodCount = (findPower(5, evenPos) * findPower(4, oddPos)) % M;
        return (int)goodCount;
    }
};
