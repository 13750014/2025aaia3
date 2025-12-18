///week15-2.cpp 學習計畫 Basic 第5題
///LeetCode 459. Repeated Substring Pattern
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s+s; ///變兩倍的字串
        string s3 = s2.substr(1, s2.length()-2); ///去掉頭、尾
        return s3.find(s) != string::npos; ///在s3裡，找s字串
    }
};
