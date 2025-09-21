#include <iostream>

using namespace std;

int main() {
    int a, b;
    // 直接讀取兩個整數直到 EOF
    while (cin >> a >> b) {
        // 處理兩個整數
        cout << a << " " << b << endl;
    }
    return 0;
}
