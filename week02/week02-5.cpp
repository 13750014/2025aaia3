///week02-5.cpp LeetCode �ǲ߭p�e �ĤG�D
///389.Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; ///�G�P�ŧi�AASII :�}�C�Τj�A�����w�]��0
        for(int i=0; i<s.length(); i++){
            char c=s[i]; ///����i�Ӧr��
            A[c]++; ///�����B��i �������r����l��
        }
        for(int i=0; i<t.length(); i++){
            char c=t[i]; ///����i�Ӧr��
            A[c]--; ///�q��l�̡A���X�r��
            if(A[c]<0) return c; ///�r�������ΡA�N�O��!!!�ʥ�!!!
        }
        return 0;
    }
