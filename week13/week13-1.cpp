///week13-1.cpp 聖誕倒數程式 Advent of Code 2025 第一天第一題
///Moodle 點擊 adventofcode.com 網址 可看到黑底，白字的題目
///在LeetCode的My Playground我的遊戲場，可以寫程式
///LeetCode 幫你把#include 全部都加好了，你不用寫#include
///右下角 stdin 可貼上你的程式Input
int main() {
    char c; ///字母，對應方向 L左轉 R右轉
    int d; ///數字，要轉動幾格
    int now=50; ///一開始的密碼鎖，指向50
    int ans = 0; ///轉動時，有幾次停在0的地方?(我們的通關密碼)
    while(cin >> c >> d){ ///一直讀資料；讀字母、讀數字
        ///if(c=='L') cout << "往左轉" << d << "格\n";
        ///if(c=='R') cout << "往右轉" << d << "格\n";
        if(c=='L') now = now-d; ///減掉
        if(c=='R') now = now+d; ///加上

        now = (now%100+100)%100; ///太大的、太小的，都限制在0~90間
        cout << "現在的刻度是：" << now << "\n";
        if(now==0)ans++; ///轉動時，停在0的地方(我們的通關密碼)
    }
    cout << "答案是：" << ans;
}
