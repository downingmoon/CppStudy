#include <string>
#include <iostream>

using namespace std;
class Survey {

private:
	string question;
	string answerArray[];
public:

	/*
	 * 질문 추가
	*/
	void addQuestion(string question);

	/*
	 * 선택항목 개수 설정
	*/
	void setAnswerSize(int size);

	/*
	 * 선택항목 추가
	*/
	void addAnswer();

	/*
	 * 질문 / 선택항목 출력
	*/
	void printQnA();

	/*
	 * 질문 응답
	*/
	void responseAnswer();

	/*
	 * 설문 응답 결과 출력
	*/
	void printResult();

	/*
	 * 설문 응답 수 초기화
	*/
	void resetAnswerCount();
};