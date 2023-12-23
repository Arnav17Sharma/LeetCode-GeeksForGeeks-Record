class Solution {
 public:
  bool isPathCrossing(string path) {
    set<int> g;
    g.insert(0);
    int x = 0;
    int y = 0;
    for (const char c : path) {
      switch (c) {
        case 'N':
          ++y;
          break;
        case 'S':
          --y;
          break;
        case 'E':
          ++x;
          break;
        case 'W':
          --x;
          break;
      }
      const int key = x * 20001 + y;
      if (g.count(key))
        return true;
      g.insert(key);
    }
    return false;
  }
};