class Solution {
 public:
  vector<int> dailyTemperatures(vector<int>& t) {
    vector<int> ans(t.size());
    stack<int> stack;

    for (int i = 0; i < t.size(); ++i) {
      while (!stack.empty() && t[stack.top()] < t[i]) {
        const int index = stack.top();
        stack.pop();
        ans[index] = i - index;
      }
      stack.push(i);
    }
    return ans;
  }
};