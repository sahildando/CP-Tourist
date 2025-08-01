

class Solution {
  public:
    vector<long long> res;  // keep res here as you wrote

    void rec(long long &N, long long curr) {
        if (curr > N) return;

        if (curr >= 10) res.push_back(curr);  // only push numbers with at least 2 digits

        int m = curr % 10;

        if (m != 9) rec(N, curr * 10 + (m + 1));  // move to next digit
        if (m != 0) rec(N, curr * 10 + (m - 1));
    }

    vector<long long> absDifOne(long long N) {
        res.clear();  // always clear res before use
        for (int i = 1; i <= 9; i++) {
            rec(N, i);  // start from digits 1 to 9 (not 0)
        }

        if (res.empty()) return {-1};

        sort(res.begin(), res.end());
        return res;
    }
};
