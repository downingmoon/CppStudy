#include "Survey.h"



int main() {
	// 클래스 객체 선언
	Survey survey;
	// 질문
	string question;
	// 선택항목 개수
	int size;

	//질문 입력 & 저장
	cout << "질문을 입력해주세요 : ";
	cin >> question;
	cout << "질문이 등록되었습니다. 등록된 질문 : " << question << endl;
	survey.addQuestion(question);

	//선택항목 개수 입력 & 저장
	cout << "선택항목 개수를 지정해주세요 : ";
	cin >> size;
	cout << "선택항목 개수는 " << size << "개 입니다." << endl;
	survey.setAnswerSize(size);

	//질문, 선택항목 출력
	survey.printQnA();
	return 0;
}
