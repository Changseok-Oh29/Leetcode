class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }

        vector<string> digitletters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> result = {""};

        for (char digit : digits) {
            string letters = digitletters[digit - '2'];

            vector<string> temp;

            for (string i : result) {
                for (char letter : letters) {
                    temp.push_back(i+letter);
                }
            }

            result = temp;

        }

        return result;
    }
};