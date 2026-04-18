#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "tap.h"
#include "eval.h"
#include "ans.h"

using namespace std;

int main() {

    Tap tap;
    Eval eval;

    vector<int> cards = tap.generate();

    cout << "Cards: ";
    for (int x : cards) cout << x << " ";
    cout << endl;

    cout << "Enter your expression: ";
    string input;
    cin >> input;

    // 檢查卡牌是否合法
    if (!eval.checkValid(input, cards)) {
        cout << "Invalid numbers used"<< endl;
        return 0;
    }

    try {
        double result = eval.calculate(input);

        cout << "Result =" << result << endl;

        if (abs(result - 24.0) < 0.000001)
            cout << "Correct! Equals 24" << endl;
        else
            cout << "Incorrect.Not equal to 24" << endl;

    }
    catch (...) {
        cout << "Invalid expression" << endl;
    }

    return 0;
}
