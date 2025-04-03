class Solution {
public:
    char solveOperator(vector<char> &values, char op) {
        if (op == '!') { // Fix: Handle NOT operation correctly
            return values[0] == 't' ? 'f' : 't';
        }

        if (op == '&') { // AND operation
            return any_of(values.begin(), values.end(), [](char ch) {
                return ch == 'f';
            }) ? 'f' : 't';
        }

        if (op == '|') { // OR operation
            return any_of(values.begin(), values.end(), [](char ch) {
                return ch == 't';
            }) ? 't' : 'f';
        }

        return 't';
    }

    bool parseBoolExpr(string expression) {
        stack<char> st;

        for (char ch : expression) {
            if (ch == ',') continue;

            if (ch == ')') {
                vector<char> values;

                while (!st.empty() && st.top() != '(') {
                    values.push_back(st.top());
                    st.pop();
                }

                // Pop '('
                if (!st.empty()) st.pop();

                // Get the operator before '('
                if (!st.empty()) {
                    char op = st.top();
                    st.pop();
                    // Reverse values to maintain correct order
                    reverse(values.begin(), values.end());
                    // Push the evaluated result back
                    st.push(solveOperator(values, op));
                }
            } else {
                st.push(ch);
            }
        }

        return st.top() == 't';
    }
};
