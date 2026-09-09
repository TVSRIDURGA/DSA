
class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        int i = 0;
        string comp = "";

        while (i < n) {
            int count = 0;
            char ch = word[i];

            while (i < n && count < 9 && word[i] == ch) {
                count++;
                i++;
            }

             comp.push_back('0' + count);
             comp.push_back(ch);
        }

        return comp;
    }
};

