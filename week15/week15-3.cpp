///week15-3.cpp 厩策璸礶 Math 程1肈
///LeetCode 459. Repeated Substring Pattern
class Solution {
public:

        double myPow(double x, long long int n){
            if(n==0) return 1; ///砏玥(1)
            if(n<0) return myPow(1/x, -n); ///砏玥(2)ㄧΑ㊣ㄧΑ
            double half = myPow(x, n/2); ///砏玥(3) ︸Ωよ
            if(n%2 == 0) return half * half; ///案计 *
            else return half * half * x;
        }

};
