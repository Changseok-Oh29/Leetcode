#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int leng = word2.size();
        int start = 0;

        string answer = "";

        for (auto i : word1) {
            answer += i;
            if (start < leng) {
                answer += word2[start];
                start += 1;
            }
        }

        if (start < leng) {
            answer += word2.substr(start, leng-start);
        }

        return answer;

    }
};