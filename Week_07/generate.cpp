class Solution {
public:
    bool valid (string& str) {
        int balance = 0;
        for (char c : str) {
            if (c == '(') {
                ++ balance;
            }
            else if (c == ')'){
                -- balance;
                if (balance < 0) 
                    return false;
            }
        }
        return balance == 0;
    }
    void generate (string& current, int n, vector<string>& result) {
        if (n == current.size()) {
            if (valid(current)) {
                result.push_back(current);
            }
            return;
        }
        current += '(';
        generate (current , n , result);
        current.pop_back();
        current += ')';
        generate (current , n , result);
        current.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;
        generate (current, n*2, result);
        return result;
    }
};