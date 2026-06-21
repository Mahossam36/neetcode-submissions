class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<pair<vector<string>,unordered_map<char,int>>> mainVector;

        for(int i=0; i<strs.size(); i++){
            unordered_map<char,int> localHash;

            for(char s : strs[i]){
                localHash[s]++;
            }
            bool isFound = false;
            for(auto& element : mainVector){

                if(element.second==localHash){
                    element.first.push_back(strs[i]);
                    isFound = true;
                    break;
                }

            }
            if(!isFound)    
                mainVector.push_back({{strs[i]}, localHash});
        }
        vector<vector<string>> result;

        for (const auto &element : mainVector)
            result.push_back(element.first);

        return result;
    }
};
