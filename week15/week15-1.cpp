///week15-1.cpp 學習計畫 Basic 第4題
///LeetCode 242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false; ///長度不一樣
        int H[256] = {}; ///用來統計的H數量
        ///先針對s字串，逐一拿出H陣列
        for(char c : s){ ///C++ 的進階for迴圈
            H[c]++; ///把「字母」對應的格子++
        }
        ///先針對字串，逐一拿出H陣列
        for(char c : t){
            H[c]--;///把「字母」對應的格子++
            if(H[c]<0) return false; ///前面累積的字母「不夠用」
        }
        /// 沒有失敗的話
        return true; ///就成功
    }
};
