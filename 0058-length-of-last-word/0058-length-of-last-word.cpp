class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
                // Traverse from the end of the string
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                count++; // count characters of the last word
            } else {
                // if we already started counting, then it's the end of the last word
                if (count > 0)
                    return count;
            }
        }

        return count; // in case the string has no trailing spaces
        
    }
};