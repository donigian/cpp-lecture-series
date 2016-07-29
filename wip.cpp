#include <iostream>

using namespace std;


class Calculator {
private:
    int firstNum = 0;
    int secondNum = 0;
    char op;

    int add() {
        return firstNum + secondNum;
    };

    int subtract() {
        return firstNum - secondNum;
    };

    int divide() {
        return firstNum / secondNum;
    };

    int multiply() {
        return firstNum * secondNum;
    };
    string errorStr = "Please use program correctly";

public:

    Calculator(char opr, int num1, int num2) {
        firstNum = num1;
        secondNum = num2;
        op = opr;
    }

    int calculate() {
        if (op == '+')
            return add();
        else if (op == '-')
            return subtract();
        else if (op == '/')
            return divide();
        else if (op == '*')
            return multiply();
        else {
            cerr << "Sorry, operation not supported!";
            return 1;
        }
    }
};

int main() {
    Calculator calc('+', 1, 2);
    cout << calc.calculate();
    return 0;
}
