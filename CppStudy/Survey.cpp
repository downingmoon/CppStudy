#include "Survey.h"


void Survey::addQuestion(string question) {
	this->question = question;
}

void Survey::setAnswerSize(int size) {
	this->answerArray->resize(size);
	cout << "�����׸� ũ�� : " << answerArray->size();
}

void Survey::addAnswer() {

}

void Survey::printQnA() {
	cout << "���� : " << this->question << endl;
}

void Survey::responseAnswer() {

}

void Survey::printResult() {

}

void Survey::resetAnswerCount() {

}

