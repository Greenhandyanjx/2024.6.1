#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int record = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                reverse(s.begin() + record, s.begin() + i);
                record = i + 1;
            }
            else if (i + 1 == s.size()) {
                reverse(s.begin() + record, s.end());
            }
        }
        int fast = 0, slow = 0;
        for (fast = 0; fast < s.size(); fast++) {
            if (s[fast] != ' ') {
                if (slow != 0) {
                    s[slow++] = ' ';
                }
                while (fast < s.size() && s[fast] != ' ') {
                    s[slow++] = s[fast++];
                }
                fast--;
            }
        }
        s.resize(slow);
        return s;
    }
};
int main()
{


	return 0;
}