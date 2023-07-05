#include <queue>
#include <iostream>
using namespace std;
queue<int> q;
void const print() {
	while ( !q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << n << " " << k << endl;

	for (int i = 0; i < n; i++) {
		q.push(i+1);
	}
	
	for (int j = 0; j < n - 1; j++) {
		for (int l = 0; l < k - 1; l++) {
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		q.pop();
	}

	print();
}

