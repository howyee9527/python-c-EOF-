#include <bits/stdc++.h>

using namespace std;

int main() {
    string line;
    // 逐行讀取直到 EOF
    while (getline(cin, line)) { //使用getline讀取整行
        stringstream ss(line); // 將一行字串轉為字串流
        vector<int> numbers;
        int num;
        // 從字串流中提取整數
        while (ss >> num) {
            numbers.push_back(num);
        }
        // 輸出當前陣列numbers讀到的整數
        for (int x : numbers) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
