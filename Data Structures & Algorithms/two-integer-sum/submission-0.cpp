class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,pair<int,int>> reminder;
        priority_queue<pair<int,int>> resultsPair;

        for(int i=0; i< nums.size(); i++){
            int subtraction= target-nums[i];

            if(reminder.find(subtraction)!= reminder.end()){
                int index1 = reminder[subtraction].second;
                int index2 = i;

                resultsPair.push({index2,index1});
            }else{
                reminder[nums[i]]={subtraction,i};

            }
        }
            return {resultsPair.top().second, resultsPair.top().first};

    }
};
