class Solution {
public:
    int minFlips(string& s) {
        int count = 0;  // Flips needed for pattern 1: 010101...
        int kcount = 0; // Flips needed for pattern 2: 101010...

        for (int i = 0; i < s.length(); i++) {
            // Pattern 1: even = '0', odd = '1'
            if (i % 2 == 0 && s[i] != '0') {
                count++;
            } else if (i % 2 != 0 && s[i] != '1') {
                count++;
            }

            // Pattern 2: even = '1', odd = '0'
            if (i % 2 == 0 && s[i] != '1') {
                kcount++;
            } else if (i % 2 != 0 && s[i] != '0') {
                kcount++;
            }
        }

        return min(count, kcount); // Minimum flips to make string alternating
    }
};
