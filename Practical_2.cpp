#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::sort;
/*Пришлось вставить функцию task_1 т.к она конфликтовала с task_2*/

/*void task_1(){
	string password;
if (!(cin >> password)) {
	cout << "NO\n";
}
if (password.length() < 8 or password.length() > 14) {
	cout << "NO\n";
}
bool upper = false;
bool lower = false;
bool digit = false;
bool other = false;
for (char w : password) {
	int code = static_cast<unsigned char>(w);
	if (code < 33 or code > 126){
		cout << "NO\n";
	}
	if (w >= 'A' and w <= 'Z') {
		upper = true;
	}
	else if (w >= 'a' and w <= 'z') {
		lower = true;
	}

	else if (w >= '0' and w <= '9') {
		digit = true;
	}
	else{
		other = true;
	}
}
int summ = upper + lower + digit + other;
if (summ >= 3) {
	cout << "YES\n";
}
else {
	cout << 'NO\n';
}
}*/

/*char get_digit(char c) {
	if (c == 'b' or c == 'f' or c == 'p' or c == 'v') return '1';
	if (c == 'c' or c == 'g' or c == 'j' or c == 'k' or c == 'q' or c == 's' or c == 'x' or c == 'z') return '2';
	if (c == 'd' or c == 't') return '3';
	if (c == 'l') return '4';
	if (c == 'm' or c == 'n') return '5';
	if (c == 'r') return '6';
	return '0';
}
void task_2() {
	string word;
	if (!(cin >> word)) {
		cout << "No word was input";
	}
	char f_letter = word[0];
	vector<char> digits;
	for (size_t i = 1; i < word.length(); ++i) {
		char digit = get_digit(word[i]);
		if (digit != '0') {
			if (digits.empty() or digits.back() != digit) {
				digits.push_back(digit);
			}
		}
	}
	string result = "";
	result += f_letter;
	for (size_t i = 0; i < digits.size() and result.length() < 4; ++i) {
		result += digits[i];
	}
	while (result.length() < 4) {
		result += '0';
	}
	cout << result;
}*/
/*void task_3() {
	int n;
	cout << "Enter guests seats: ";
	cin >> n;
	vector<int> a(n + 1);
	for (int b = 1; b <= n; ++b) {
		int seat;
		cin >> seat;
		a[seat] = b;
	}
	for (int i = 1; i <= n; ++i) {
		cout << a[i];
		if (i < n) {
			cout << " ";
		}
	}*/

}
/*void task_4() {
	vector<char> backwards;
	cout << "Enter a line:";
	for (size_t i = 0; i != backwards.size(); i++) {
		cin >> backwards[i];
	}
	cousort(backwards.rbegin(), backwards.rend());
	}
	не работает и впринципе недописан...
	*/

int main(){
	/*task_1();*/
	/*task_2();*/
	/*task_3();*/
	/*task_4();*/
}
