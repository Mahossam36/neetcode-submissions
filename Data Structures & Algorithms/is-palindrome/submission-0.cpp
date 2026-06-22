class Solution {
public:
    bool isPalindrome(string s) {


        int left = 0;
        int right = s.size()-1;

        while(left<=right){

            if(!((s[left]<='z' && s[left]>='a') ||
             (s[left]<='Z' && s[left]>='A' ) || 
             (s[left]<='9' && s[left]>='0'))){

               left++;
               continue;

            }
            if(!((s[right]<='z' && s[right]>='a') ||
             (s[right]<='Z' && s[right]>='A' ) || 
             (s[right]<='9' && s[right]>='0'))){

                right--;
                continue;

            }
            if(tolower(s[left])!=tolower(s[right]))
                return false;
            left++;
            right--;    
        }
        return true;

    }
};
