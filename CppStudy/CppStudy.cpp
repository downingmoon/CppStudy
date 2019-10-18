#include "Survey.h"


// 입력값 정수 확인
// 정수 : 입력값 리턴
// 정수 제외 나머지 : -1 리턴
int inputIntegerOnly(istream& cin) {
	int result = -1;
	cin >> result;
	if (!cin) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "숫자만 입력해주세요." << endl;
		return -1;
	} else {
		return result;
	}
}

int main() {
	// 클래스 객체 선언
	Survey survey;

	// 선택 반복을 위한 변수
	bool flag = true;
	// 선택 구분용 변수
	int action;

	// 질문
	string question;
	// 선택항목 개수
	int size = 0;
	// 선택항목
	string answer;

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
			cout << "질문을 입력해주세요 : ";
			cin >> question;
			survey.addQuestion(question);
			cout << "질문이 저장되었습니다. 저장된 질문 : " << question << endl;
			break;
		}
		//선택항목 개수 입력 & 저장
		case 2: {
			cout << "선택항목 개수를 지정해주세요 : ";
			size = inputIntegerOnly(cin);

			if (size < 0) {
				break;
			}
			survey.setAnswerSize(size);
			cout << "선택항목 개수가 저장되었습니다.저장된 개수: " << size << "개" << endl;
			break;
		}
		//선택항목 등록
		case 3: {
			if (size == 0) {
				cout << "선택항목 개수를 먼저 지정해주세요." << endl;
				break;
			}
			cout << "선택항목 개수 : " << survey.getAnswerSize() << "& 지정개수 : " << size << endl;
			if (survey.getAnswerSize() >= size) {
				cout << "선택항목 개수를 초과했습니다." << endl;
				break;
			}
			cout << "선택항목을 등록해주세요 : ";
			cin >> answer;
			survey.addAnswer(answer);
			break;
		}
		//질문, 선택항목 출력
		case 4: {
			survey.printQnA();
			break;
		}
		case 5: {
			break;
		}
		case 6: {
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
