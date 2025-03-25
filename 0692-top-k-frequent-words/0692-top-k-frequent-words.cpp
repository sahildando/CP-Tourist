class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;

        for (string &word : words) {
            mp[word]++;
        }

        vector<pair<string, int>> vec;
        for (auto &it : mp) {
            vec.push_back({it.first, it.second});
        }

        auto lambda = [] (pair<string, int> &p1, pair<string, int> &p2) {
            if (p1.second == p2.second)
                return p1.first < p2.first; // Fixed comparison

            return p1.second > p2.second;
        };

        sort(vec.begin(), vec.end(), lambda);

        vector<string> result(k);  // Declaring result vector
        int i = 0;
        while (i < k) {
            result[i] = vec[i].first;
            i++;
        }
        return result;
    }
};
