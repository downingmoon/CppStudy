#pragma once
#include <string>

using namespace std;
class Answer {
private:
	//선택항목(답변)
	string answer;
	//응답 수
	int count = 0;

public:
	//생성자
	Answer(string answer);

	//저장된 선택항목 확인
	string getAnswer();

	//응답
	void addCount();

	//응답 수 확인
	int getCount();

	//응답 초기화
	void resetCount();
};

