class Solution {
  public:
    // Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a) {
        long ones = 0;

        // Count total number of '1's in the string
        for (char c : a) {
            if (c == '1') ones++;
        }

        // Number of substrings starting and ending with 1 is C(ones, 2) = ones * (ones - 1) / 2
        return (ones * (ones - 1)) / 2;
    }
};
