///week01-1.cpp
///LeetCode 28. Find the Index of the First Occurrence in a String
///�b haystack ���_��� �̧�� needle �p(�j�����w)
///haystack:sadbut sad
///needle:    sad
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length() ,N = needle.length(); ///�r�ꪺ����
        for(int i=0;i<=H-N;i++){ ///9 �� 3 �o�� 6
            ///substr(�}�l,����)�������r��
            if(haystack.substr(i,N) == needle) return i; ///��쵪��
        }
        return -1; ///�j��̭� �䤣�� needle �N����
    }
