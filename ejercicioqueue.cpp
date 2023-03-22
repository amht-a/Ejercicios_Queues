#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

void removeDuplicates(queue<int>& q) {
    unordered_set<int> seen;
    queue<int> result;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        if (seen.insert(curr).second) {
            result.push(curr);
        }
    }

    q = result;
}

int main() {
    queue<int> q {9, 21, 4, 12, 9, 2};
    removeDuplicates(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
