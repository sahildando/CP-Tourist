class Solution {
public:
    long long calculateScore(string s) {

        unordered_map<char, char> mirror;

        // Populate the mirror map for characters 'a' to 'z'
        for (char c = 'a'; c <= 'z'; ++c) {
            mirror[c] = 'z' - (c - 'a'); // Example mirroring logic
        }

        unordered_map<char, vector<int>> indexMap;
        long long score = 0;

        for (int i = 0; i < s.size(); ++i) {
            char mirroredChar = mirror[s[i]]; 

            if (!indexMap[mirroredChar].empty()) {
                int j = indexMap[mirroredChar].back(); 
                indexMap[mirroredChar].pop_back();

              
                score += (i - j); 
            } else {

           

            indexMap[s[i]].push_back(i);
        }
     }

        return score;
    }
};