class Solution {
public:
    int minPartitions(string n) {
        sort(n.begin(), n.end());
        reverse(n.begin(), n.end());
        return n[0]-'0';
    }
};