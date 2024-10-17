class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
    while (columnNumber > 0){
        columnNumber--;
        int remain = columnNumber%26;

        char ch = remain + 'A';
        result.push_back(ch);

        columnNumber /=26;

    }
    reverse(begin(result), end (result));
    return result;

        
    }
};