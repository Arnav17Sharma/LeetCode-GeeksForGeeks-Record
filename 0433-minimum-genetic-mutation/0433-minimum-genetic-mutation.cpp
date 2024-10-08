class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> bankset(bank.begin(), bank.end());
        unordered_set<string> visited;

        queue<string> q;
        q.push(start);
        visited.insert(start);

        int level = 0;
        while(!q.empty()) {
            int n = q.size();

            while(n--) {
                string curr = q.front();
                q.pop();

                if(curr == end)
                    return level;
                
                for(char ch: "ACGT") {
                    for(int i=0; i<curr.length(); i++) {
                        string temp = curr;
                        temp[i] = ch;
                        if(visited.find(temp) == visited.end() && bankset.find(temp) != bankset.end()) {
                            visited.insert(temp);
                            q.push(temp);
                        } 
                    }
                }
            }
            level++;
        }
        return -1;
    }
};