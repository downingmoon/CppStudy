#include <iostream>
#include "Question.h"
#include "Answer.h"
#include "SurveyManager.h"


// 입력값 정수 확인
// 정수 : 입력값 리턴
// 정수 제외 나머지 : -1 리턴
int inputIntegerOnly(istream& cin) {
	int result = -1;
	cin >> result;
	if (!cin) {
		result = -1;
		cout << "숫자만 입력해주세요." << endl;
	}
	cin.clear();
	cin.ignore(32767, '\n');
	return result;
}

int main() {
	
	//질문 클래스 객체
	Question question;
	//선택항목 관리 클래스 객체
	SurveyManager surveyMgr;

	// 선택 반복을 위한 변수
	bool flag = true;
	// 선택 구분용 변수
	int action;

	// 선택항목 최대 사이즈
	int answerSize;

	//안내
	cout << "=========== 번호를 선택해주세요. ==========" << endl;
	cout << "|              1. 질문 등록               |" << endl;
	cout << "|          2. 선택항목 개수 지정          |" << endl;
	cout << "|            3. 선택항목 등록             |" << endl;
	cout << "|            4. 설문 문항 출력            |" << endl;
	cout << "|            5. 설문 결과 출력            |" << endl;
	cout << "|            6. 응답 수 초기화            |" << endl;
	cout << "|               종료 : 0 입력             |" << endl;
	cout << "===========================================" << endl;

	while (flag) {
		cout << "선택 >> ";
		action = inputIntegerOnly(cin);

		switch (action) {
		//질문 입력 & 저장
		case 1: {
			// 질문 입력
			string questionInput;
			cout << "질문을 입력해주세요 : ";
			getline(cin, questionInput);

			//질문 저장
			question.setQuestion(questionInput);
			cout << "질문이 저장되었습니다." << endl;
			question.printQuestion();
			break;
		}
		//선택항목 개수 입력 & 저장
		case 2: {
			//선택항목 개수 입력
			cout << "선택항목 개수를 지정해주세요 : ";
			answerSize = inputIntegerOnly(cin);

			//선택항목 저장
			if (answerSize != -1) {
				surveyMgr.setMaxAnswerSize(answerSize);
				cout << "선택항목 개수가 저장되었습니다.\n저장된 개수: " << surveyMgr.getMaxAnswerSize() << "개" << endl;
			}
			break;
		}
		//선택항목 등록
		case 3: {
			//선택항목 지정여부 확인
			if (surveyMgr.getMaxAnswerSize() == 0) {
				cout << "선택항목 개수를 먼저 지정해주세요." << endl;
				break;
			}
			//선택항목 지정개수 초과 확인
			if (surveyMgr.getCurrentAnswerSize() >= surveyMgr.getMaxAnswerSize()) {
				cout << "저장 가능한 선택항목 개수를 초과했습니다." << endl;
				break;
			}
			
			//선택항목 입력
			cout << "선택항목을 등록해주세요 : ";
			string answerInput;
			getline(cin, answerInput);

			//선택항목 저장
			surveyMgr.addAnswer(answerInput);
			cout << "선택항목이 등록되었습니다." << endl;
			break;
		}
		//질문, 선택항목 출력 & 응답입력
		case 4: {
			question.printQuestion();
			surveyMgr.printAnswerList();

			while (true) {
				//응답 입력
				cout << "답변 입력 : ";
				int response = inputIntegerOnly(cin);

				// 범위 초과하지 않는 답변만 저장
				if (response > 0 && response <= surveyMgr.getCurrentAnswerSize()) {
					//응답 저장
					surveyMgr.addCountInAnswer(response);
					cout << "답변을 저장했습니다." << endl;
					break;
				}
				else {
					cout << "답변 범위를 초과했습니다.\n다시 입력해주세요." << endl;
				}

			}
			break;
		}
		case 5: {
			surveyMgr.printResult();
			break;
		}
		case 6: {
			surveyMgr.resetAllCount();
			cout << "설문 결과가 초기화 되었습니다." << endl;
			break;
		}
		case 0: {
			flag = false;
			break;
		}
		default:
			break;
		}
	}

	return 0;
}