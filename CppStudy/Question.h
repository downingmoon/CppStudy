#pragma once
#include <string>
#include <iostream>

using namespace std;
class Question {
private:
	string question;
public:

	//질문 등록
	void setQuestion(string question);

	//저장된 질문 확인
	void printQuestion();

};

