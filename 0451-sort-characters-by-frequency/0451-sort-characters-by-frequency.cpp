class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char, int>> vec(128, {0, 0});  // Initialize for all ASCII characters
        
        for (char &ch : s) {
            vec[ch].first = ch;  // Store the character
            vec[ch].second++;     // Increment frequency
        }

        // Lambda function for sorting (descending order of frequency)
        auto lambda = [](pair<char, int> &p1, pair<char, int> &p2) {
            return p1.second > p2.second;
        };

        sort(begin(vec), end(vec), lambda);  // Sort by frequency

        string result = "";
        for (auto &p : vec) {
            if (p.second > 0) {
                result += string(p.second, p.first);
            }
        }

        return result;
    }
};
