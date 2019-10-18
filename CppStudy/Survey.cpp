#include "Survey.h"


void Survey::addQuestion(string question) {
	this->question = question;
}

void Survey::setAnswerSize(int size) {
	this->answerArray->resize(size);
	cout << "선택항목 크기 : " << answerArray->size();
}

void Survey::addAnswer() {

}

void Survey::printQnA() {
	cout << "질문 : " << this->question << endl;
}

void Survey::responseAnswer() {

}

void Survey::printResult() {

}

void Survey::resetAnswerCount() {

}

