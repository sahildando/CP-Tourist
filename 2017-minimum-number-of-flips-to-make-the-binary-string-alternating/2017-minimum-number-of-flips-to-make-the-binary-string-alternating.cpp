class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        string doubleS = s + s;

        string alt1 = "", alt2 = "";
        for (int i = 0; i < 2 * n; i++) {
            // alt1: 010101...
            alt1 += (i % 2 == 0) ? '0' : '1';
            // alt2: 101010...
            alt2 += (i % 2 == 0) ? '1' : '0';
        }

        int minFlips = INT_MAX;
        int diff1 = 0, diff2 = 0;

        for (int i = 0; i < 2 * n; i++) {
            if (doubleS[i] != alt1[i]) diff1++;
            if (doubleS[i] != alt2[i]) diff2++;

            // Start sliding the window once size exceeds n
            if (i >= n) {
                if (doubleS[i - n] != alt1[i - n]) diff1--;
                if (doubleS[i - n] != alt2[i - n]) diff2--;
            }

            if (i >= n - 1) {
                minFlips = min({minFlips, diff1, diff2});
            }
        }

        return minFlips;
    }
};


