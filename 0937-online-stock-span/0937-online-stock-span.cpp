class StockSpanner {
public:
    stack<pair<int, int>> st;  // Stack to store {price, span}
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;

        while (!st.empty() && st.top().first <= price) {
            span += st.top().second; // Add span of previous elements
            st.pop();  // Remove the processed element
        }

        st.push({price, span}); // Push the current price and its span
        return span;
    }
};
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */