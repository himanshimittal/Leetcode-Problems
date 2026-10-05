class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        int open = 0;
        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                open++;
            }
            else {
                open--;
                if (s[i - 1] == '(') {
                    score += 1 << open;
                }
            }
        }

        return score;
    }
};