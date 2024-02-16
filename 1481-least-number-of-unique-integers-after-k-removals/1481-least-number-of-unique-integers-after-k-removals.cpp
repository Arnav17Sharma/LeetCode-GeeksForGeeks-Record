class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int b) {
        sort(arr.begin(), arr.end());
        vector<int> counts;
        int prev = arr[0], count = 1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]==prev){count++;}
            else{counts.push_back(count);count = 1;}
            prev = arr[i];
        }
        counts.push_back(count);
        sort(counts.begin(), counts.end());
        // for(auto x: counts){cout << x << " ";}
        // cout << endl;
        int k;
        for(k=0; k<counts.size(); k++) {
            if(b >= counts[k]){b-=counts[k];}
            else {break;}
        }
        int n = counts.size();
        return n-k;
    }
};