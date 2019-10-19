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
	int i = 1;
	for (Answer a : this->answerList) {
		cout << i << "번 : " << a.getAnswer() << endl;
		i++;
	}
}

int SurveyManager::getCurrentAnswerSize() {
	return this->answerList.size();
}

void SurveyManager::addCountInAnswer(int response) {
	this->answerList[(response - 1)].addCount();
}

void SurveyManager::printResult() {
	cout << "==== 결과 ====" << endl;
	for (Answer a : this->answerList) {
		cout << a.getAnswer() << " : " << a.getCount() << "명" << endl;
	}
}

void SurveyManager::resetAllCount() {
	for (int i = 0; i < this->answerList.size(); i++) {
		this->answerList[i].resetCount();
	}
}