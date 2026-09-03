#include <vector>
#include <string>

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        // Optimization: A valid IP length is between 4 and 12 digits
        if (s.length() < 4 || s.length() > 12) {
            return result;
        }
        
        string current = "";
        backtrack(s, 0, 0, current, result);
        return result;
    }

private:
    void backtrack(const string& s, int index, int dots, string current, vector<string>& result) {
       
        if (dots == 4 && index == s.length()) {
            current.pop_back(); // Remove the trailing dot
            result.push_back(current);
            return;
        }
        
       
        if (dots == 4 || index == s.length()) {
            return;
        }

        for (int len = 1; len <= 3 && index + len <= s.length(); ++len) {
            string segment = s.substr(index, len);
            int val = stoi(segment);

            
            if ((segment[0] == '0' && len > 1) || val > 255) {
                break;
            }

            backtrack(s, index + len, dots + 1, current + segment + ".", result);
        }
    }
};