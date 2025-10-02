///week04-1.cpp 家览肈酚帝肈ヘ糶
///LeetCode 珼驹肈 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans= numBottles; ///秨み碞耻硂或瞺
        while(numBottles >= numExchange) {  ///狦瞺计 >= 传秖碞传
            numBottles = numBottles - numExchange+1; ///传瞺都
            ans++; ///耻瞺
            numExchange++; ///传夹非瞺
        }
        return ans;
    }
};
