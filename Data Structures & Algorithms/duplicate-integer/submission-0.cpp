#include <unordered_set> 
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> isfound;
    
    for(int currentNum : nums){
        
        if(isfound.find(currentNum) != isfound.end())
        {  
            return true;

        }
        else
            isfound.insert(currentNum);
            

    }
        return false;
    }
};