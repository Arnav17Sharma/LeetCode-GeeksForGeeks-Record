
class RandomizedSet {
public:
    unordered_map<int, int> t;
    vector<int> k;
    RandomizedSet() {

    }
    bool insert(int val) {
        if(t.find(val) != t.end())
            return 0;
        t[val] = k.size();
        k.push_back(val);
        return 1;    
    }
    bool remove(int val) {
        if(t.find(val) == t.end())
            return 0;
        int p1 = t[val];
        int p2 = k.size() - 1;
        swap(k[p1], k[p2]);
        k.pop_back();
        t[k[p1]] = p1;
        t.erase(val);
        return 1;
    }
    int getRandom() {
        return k[rand() % k.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */