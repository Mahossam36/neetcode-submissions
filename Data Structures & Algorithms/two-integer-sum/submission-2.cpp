class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        unordered_map<int,pair<int,int>> reminder;

        for(int i=0; i< nums.size(); i++){
            int subtraction= target-nums[i];

            if(reminder.find(subtraction)!= reminder.end()){
                int index1 = reminder[subtraction].second;
                int index2 = i;
                return {index1,index2};

            }else{
                reminder[nums[i]]={subtraction,i};

            }
        }
            return {};

    }
};
