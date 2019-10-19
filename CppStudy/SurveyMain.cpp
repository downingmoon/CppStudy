#include <iostream>
#include "Question.h"
#include "Answer.h"
#include "SurveyManager.h"


// �Է°� ���� Ȯ��
// ���� : �Է°� ����
// ���� ���� ������ : -1 ����
int inputIntegerOnly(istream& cin) {
	int result = -1;
	cin >> result;
	if (!cin) {
		result = -1;
		cout << "���ڸ� �Է����ּ���." << endl;
	}
	cin.clear();
	cin.ignore(32767, '\n');
	return result;
}

int main() {
	
	//���� Ŭ���� ��ü
	Question question;
	//�����׸� ���� Ŭ���� ��ü
	SurveyManager surveyMgr;

	// ���� �ݺ��� ���� ����
	bool flag = true;
	// ���� ���п� ����
	int action;

	// �����׸� �ִ� ������
	int answerSize;

	//�ȳ�
	cout << "=========== ��ȣ�� �������ּ���. ==========" << endl;
	cout << "|              1. ���� ���               |" << endl;
	cout << "|          2. �����׸� ���� ����          |" << endl;
	cout << "|            3. �����׸� ���             |" << endl;
	cout << "|            4. ���� ���� ���            |" << endl;
	cout << "|            5. ���� ��� ���            |" << endl;
	cout << "|            6. ���� �� �ʱ�ȭ            |" << endl;
	cout << "|               ���� : 0 �Է�             |" << endl;
	cout << "===========================================" << endl;

	while (flag) {
		cout << "���� >> ";
		action = inputIntegerOnly(cin);

		switch (action) {
		//���� �Է� & ����
		case 1: {
			// ���� �Է�
			string questionInput;
			cout << "������ �Է����ּ��� : ";
			getline(cin, questionInput);

			//���� ����
			question.setQuestion(questionInput);
			cout << "������ ����Ǿ����ϴ�." << endl;
			question.printQuestion();
			break;
		}
		//�����׸� ���� �Է� & ����
		case 2: {
			//�����׸� ���� �Է�
			cout << "�����׸� ������ �������ּ��� : ";
			answerSize = inputIntegerOnly(cin);

			//�����׸� ����
			if (answerSize != -1) {
				surveyMgr.setMaxAnswerSize(answerSize);
				cout << "�����׸� ������ ����Ǿ����ϴ�.\n����� ����: " << surveyMgr.getMaxAnswerSize() << "��" << endl;
			}
			break;
		}
		//�����׸� ���
		case 3: {
			//�����׸� �������� Ȯ��
			if (surveyMgr.getMaxAnswerSize() == 0) {
				cout << "�����׸� ������ ���� �������ּ���." << endl;
				break;
			}
			//�����׸� �������� �ʰ� Ȯ��
			if (surveyMgr.getCurrentAnswerSize() >= surveyMgr.getMaxAnswerSize()) {
				cout << "���� ������ �����׸� ������ �ʰ��߽��ϴ�." << endl;
				break;
			}
			
			//�����׸� �Է�
			cout << "�����׸��� ������ּ��� : ";
			string answerInput;
			getline(cin, answerInput);

			//�����׸� ����
			surveyMgr.addAnswer(answerInput);
			cout << "�����׸��� ��ϵǾ����ϴ�." << endl;
			break;
		}
		//����, �����׸� ��� & �����Է�
		case 4: {
			question.printQuestion();
			surveyMgr.printAnswerList();

			while (true) {
				//���� �Է�
				cout << "�亯 �Է� : ";
				int response = inputIntegerOnly(cin);

				// ���� �ʰ����� �ʴ� �亯�� ����
				if (response > 0 && response <= surveyMgr.getCurrentAnswerSize()) {
					//���� ����
					surveyMgr.addCountInAnswer(response);
					cout << "�亯�� �����߽��ϴ�." << endl;
					break;
				}
				else {
					cout << "�亯 ������ �ʰ��߽��ϴ�.\n�ٽ� �Է����ּ���." << endl;
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
			cout << "���� ����� �ʱ�ȭ �Ǿ����ϴ�." << endl;
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