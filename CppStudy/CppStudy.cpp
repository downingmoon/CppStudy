#include <iostream>
#include <string>
#include "Survey.cpp"

using namespace std;

int main() {
	Survey survey;

	string question;
	cout << "질문을 입력해주세요 : ";
	cin >> question;
	survey.addQuestion(question);

	return 0;
}
