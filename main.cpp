#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main() {

    string input;
    stack<int> s;

    cout << "Enter an expression: ";

    while (cin >> input) {
        if (input == "+") {
            int top = s.top();
            s.pop();
            int top1 = s.top();
            s.pop();
            s.push(top1 + top);
        }
        else if (input == "-") {
            int top = s.top();
            s.pop();
            int top1 = s.top();
            s.pop();
            s.push(top1 - top);
        }
        else if (input == "*") {
            int top = s.top();
            s.pop();
            int top1 = s.top();
            s.pop();
            s.push(top1 * top);
        }
        else if (input == "/") {
            int top = s.top();
            s.pop();
            int top1 = s.top();
            s.pop();
            s.push(top1 / top);
        }
        else if (input == "%") {
            int top = s.top();
            s.pop();
            int top1 = s.top();
            s.pop();
            s.push(top1 % top);
        }
        else if (input == "=") break;
        else {
            try {
                int n = stoi(input);
                s.push(n);
            } catch (exception e){break;}
        }
    }
        

    if (s.size() != 1) {
        cout << "Expression was invalid.\n";
    } else {
        cout << "Result: " << s.top() << endl;
    }

    return 0;
}