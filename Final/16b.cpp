#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int main() {
    // Open the batch file
    ifstream file("batch.txt");

    if (!file) {
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    stack<int> stk;
    int num;

    // Read records from the file and push them onto the stack
    while (file >> num) {
        stk.push(num);
    }

    // Close the file
    file.close();

    // Display the stack elements
    cout << "스택의 원소들: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}
