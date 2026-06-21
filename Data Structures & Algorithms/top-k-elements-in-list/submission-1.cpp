class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freqOfEach;
        vector<int>result;
        int maxFreq = INT_MIN;

        for(int& num : nums){
            maxFreq = max(maxFreq, ++freqOfEach[num]);
        } 

        int size = freqOfEach.size();
        double cons = size/(maxFreq+1);

        vector<vector<int>> buckets(maxFreq + 1);
        for(auto& element : freqOfEach){

            buckets[(maxFreq+1)-element.second].push_back(element.first);
        }

        for(auto &buck : buckets){
            if(buck.size()<=k && k!=0){
                for(auto &b : buck){
                    result.push_back(b);
                }    
                k-=buck.size();
            }
            else if (k!=0){
                sort(buck.rbegin(), buck.rend());
                int i=0;
                while(i<k){
                    result.push_back(buck[i]);
                    k--;
                    i++;
                }
            }
        }
    return result;
    }
};
