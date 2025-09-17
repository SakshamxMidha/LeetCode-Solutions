class Solution {
public:
    bool isAnagram(string st1, string st2) {
        if (st1.length() != st2.length()) {
            return false;
        }

        int count[26] = {0};

        for (int i = 0; i < st1.length(); i++) {
            count[st1[i] - 'a']++;
            count[st2[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
