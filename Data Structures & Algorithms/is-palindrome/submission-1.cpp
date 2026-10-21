class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0 , j = s.size() - 1;
        while (i < j){
            char k = s[i] , l = s[j];
            if (!isalnum(k)){
                i++;
            }
            else if (!isalnum(l)){
                j--;
            }
            else if ((tolower(k)) == (tolower(l))){
                i++;
                j--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
