#include "Survey.h"


void Survey::addQuestion(string question) {
	this->question = question;
}

void Survey::setAnswerSize(int size) {
	this->answerArray = new string[size];
}

int Survey::getAnswerSize() {
	return sizeof(this->answerArray);
}

void Survey::addAnswer(string answer) {
	this->answerArray->append(answer);
}

void Survey::printQnA() {
	cout << "질문 : " << this->question << endl;
	for (int i = 1; i <= sizeof(this->answerArray); i++) {
		cout << i << "번 항목 : " << endl;
	}
}

void Survey::responseAnswer() {

}

void Survey::printResult() {

}

void Survey::resetAnswerCount() {

}

