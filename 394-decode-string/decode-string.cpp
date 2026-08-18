class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;

        string curr = "";
        int num = 0;

        for (char ch : s) {

            // Build the number
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            // Opening bracket
            else if (ch == '[') {
                numStack.push(num);
                strStack.push(curr);

                num = 0;
                curr = "";
            }

            // Closing bracket
            else if (ch == ']') {
                int repeat = numStack.top();
                numStack.pop();

                string prev = strStack.top();
                strStack.pop();

                string temp = "";

                for (int i = 0; i < repeat; i++) {
                    temp += curr;
                }

                curr = prev + temp;
            }

            // Normal character
            else {
                curr += ch;
            }
        }

        return curr;
    }
};