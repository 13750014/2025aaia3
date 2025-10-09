///week05-4.cpp
///LeetCode 學習計畫 Built-In Functions 第2題 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length();i++){
            s[i] = tolower(s[i]);
        }///每個字母，都變成小寫(完整版要 #include <ctype.h>)
        ///或是用 #include <cctype> 兩兩視同一個檔案啦
        return s; ///答案送出去
    }
};
