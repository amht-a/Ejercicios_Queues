#include <iostream>
#include <queue>

using namespace std;

void reversequeue(queue<int>& q) {
    if (q.empty()) return;
    int x = q.front();
    q.pop();
    reversequeue(q);
    q.push(x);
}

void printqueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q{{13, 23, 3, 14, 21, 89}};
    cout << "Cola original: "; printqueue(q);
    reversequeue(q);
    cout << "Cola invertida: "; printqueue(q);
}