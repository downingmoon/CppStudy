#include "Question.h"


void Question::setQuestion(string question) {
	this->question = question;
}

void Question::printQuestion() {
	cout << "���� : " << this->question << endl;
}