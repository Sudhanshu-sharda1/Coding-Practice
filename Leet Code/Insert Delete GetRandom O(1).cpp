class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int> myvector;
    unordered_map<int, int> pos;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(pos.find(val) != pos.end())
            return false;
        myvector.push_back(val);
        pos.insert({val, myvector.size()-1});
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        
        if(pos.find(val) == pos.end())
            return false;
        
        int position = pos[val];
        myvector[position] = myvector[myvector.size()-1];
        pos[myvector[position]] = position;
        myvector.pop_back();
        pos.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return myvector[rand()%myvector.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
