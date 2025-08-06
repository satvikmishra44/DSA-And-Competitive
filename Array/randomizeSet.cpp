class RandomizedSet {

private:
    vector<int> nums;
    unordered_map<int, int> hashmap;

public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(hashmap.count(val)){
            return false;
        }
        nums.push_back(val);
        hashmap[val] = nums.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if(!hashmap.count(val)){
            return false;
        }

        int index = hashmap[val];
        int last = nums.back();

        nums[index] = last;
        hashmap[last] = index;

        nums.pop_back();
        hashmap.erase(val);

        return true;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};
