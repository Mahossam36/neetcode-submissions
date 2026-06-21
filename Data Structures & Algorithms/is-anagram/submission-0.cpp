class Solution {
public: 
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s_hash;
        unordered_map<char,int> t_hash;
        int S_Size = s.length();
        int T_Size = t.length();

        if(S_Size != T_Size) return false;

        int biggerSize = max(S_Size,T_Size);
        int i = 0;


        while(i<biggerSize){
            if(i< S_Size)
            {
                s_hash[s[i]]++;
            }
            if(i< T_Size)
            {
                t_hash[t[i]]++;
            }
            i++;
        }

        i = 0;  
        while(i<27){
            if(s_hash['a' + i] != t_hash['a' + i])
                return false ;
                i++;
        }
        return true;

    }
};
