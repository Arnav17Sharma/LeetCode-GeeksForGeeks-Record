class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long total = 0;
        for(auto x: skill) {total += x;}
        if(skill.size() % 2 != 0) return -1;
        int n = total / 2;
        sort(skill.begin(), skill.end());
        long long ans = 0;
        int l = skill.size();
        int chem = skill[0] + skill.back();
        cout << chem << endl;
        for(int i=0; i< l / 2; i++) {
            if(chem == skill[i] + skill[l - i - 1])
                ans += (skill[i] * skill[l - i - 1]);
            else
                return -1;
        }
        return ans;
    }
};