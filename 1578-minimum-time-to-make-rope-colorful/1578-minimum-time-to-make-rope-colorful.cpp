class Solution {
    public:
    int minCost(string colors, vector<int> neededTime) {
        int p = -1;
        int t = 0;

        for (int i = 0; i < colors.length(); i++) {
            if (p == -1 || colors[p] != colors[i]) {p = i;}
            else {
                if (neededTime[p] < neededTime[i]) {t += neededTime[p];p = i;}
                else {t += neededTime[i];}
            }
        }
        return t;
    }
};