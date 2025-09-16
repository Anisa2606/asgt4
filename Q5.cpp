#include <iostream>
#include <queue>
using namespace std;

class StackTwoQ {
    queue<int> q1, q2;
public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    void pop() {
        if (!q1.empty()) q1.pop();
        else cout << "Stack empty\n";
    }
    int top() {
        if (!q1.empty()) return q1.front();
        else return -1;
    }
    bool empty() {
        return q1.empty();
    }
};