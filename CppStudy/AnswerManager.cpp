#include "SurveyManager.h"

void SurveyManager::setMaxAnswerSize(int size) {
	this->maxAnswerSize = size;
}

int SurveyManager::getMaxAnswerSize() {
	return this->maxAnswerSize;
}

void SurveyManager::addAnswer(string answerInput) {
	Answer answer = Answer(answerInput);
	this->answerList.push_back(answer);
}

void SurveyManager::printAnswerList() {
	for (Answer a : answerList) {
		cout << a.getAnswer() << endl;
	}
}

int SurveyManager::getCurrentAnswerSize() {
	return this->answerList.size();
}