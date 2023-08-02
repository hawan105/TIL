#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;  // 수열의 길이 입력 받기

    vector<int> sequence(n);
    stack<int> stk;
    vector<char> result;

    for (int i = 0; i < n; i++) {
        cin >> sequence[i];  // 수열 입력 받기
    }

    int current = 1;  // 1부터 n까지의 수를 순서대로 확인하기 위한 변수
    int idx = 0;  // 결과 배열의 인덱스

    for (int i = 0; i < n; i++) {
        while (current <= sequence[i]) {
            stk.push(current++);  // 스택에 push
            result.push_back('+');
        }

        if (stk.top() == sequence[i]) {
            stk.pop();  // 스택에서 pop
            result.push_back('-');
        } else {
            cout << "NO" << endl;  // 불가능한 경우
            exit(0);
        }
    }

    // 결과 출력
    for (char ch : result) {
        cout << ch << endl;
    }

    return 0;
}