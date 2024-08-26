class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> connections(n+1, 0);
        for(auto x: edges) {
            connections[x[0]-1]++;
            connections[x[1]-1]++;
        }
        for(int i=0; i<n; i++) {
            if(connections[i] == n)
                return i+1;
            cout << connections[i] << " ";
        }
        cout << endl;
        return -1;
    }
};