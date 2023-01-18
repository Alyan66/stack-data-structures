#include<iostream>
using namespace std;

class stack {
private:
	int n;
	string* arr;
	int top;
public:
	stack() {
		n = 13;
		arr = new string[n];
		top = -1;

	}
	void push(string str) {
		if (top == n - 1) {
			cout << "stack is overflow";
			return;
		}
		top++;
		arr[top] = str;
		if (arr[top] == ")") {
			pop();
		}
		cout << top;
	}
	void pop() {
		if (top == 0) {
			cout << "stack is empty ";
		}
		top--;
	}
	bool is_empty() {
		if (top == -1) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main() {
	stack s;
	string data[13];
	cout << "enter data in string form ";
	for (int i = 0; i < 13; i++) {
		cin >> data[i];

	}
	for (int i = 0; i < 13; i++) {
		if (data[i] == "(" || data[i] == ")") {
			s.push(data[i]);
		}
	}
	if (s.is_empty()) {
		cout << "balanced";
	}
	else {
		cout << "unbalanced";
	}


}