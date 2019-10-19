#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Answer.h"

using namespace std;
class SurveyManager {
private:
	//선택항목 목록
	vector<Answer> answerList;

	//선택항목 최대 개수
	int maxAnswerSize;

public:
	//선택항목 최대 개수 설정
	void setMaxAnswerSize(int size);

	//선택항목 최대 개수 확인
	int getMaxAnswerSize();

	//선택항목 목록에 입력한 항목 추가
	void addAnswer(string answerInput);

	//선택항목 출력
	void printAnswerList();

	//현재 선택항목 개수 반환
	int getCurrentAnswerSize();
};

