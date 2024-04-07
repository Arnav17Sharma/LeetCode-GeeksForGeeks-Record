class Solution {
 public:
  bool checkValidString(const string& s) {
    int open = 0;
    int close = 0;
    for (char c : s) {
        if (c == '(') {
            open++;
            close++;
        }
        else if (c == ')') {
            open--;
            close--;
        }
        else {
            open--;
            close++;
        }
        open = max(0, open);
        if (close < 0)
            return false;
    }
    return (open == 0);
  }
};