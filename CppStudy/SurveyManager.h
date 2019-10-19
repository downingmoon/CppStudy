#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Answer.h"

using namespace std;
class SurveyManager {
private:
	//�����׸� ���
	vector<Answer> answerList;

	//�����׸� �ִ� ����
	int maxAnswerSize;

public:
	//�����׸� �ִ� ���� ����
	void setMaxAnswerSize(int size);

	//�����׸� �ִ� ���� Ȯ��
	int getMaxAnswerSize();

	//�����׸� ��Ͽ� �Է��� �׸� �߰�
	void addAnswer(string answerInput);

	//�����׸� ���
	void printAnswerList();

	//���� �����׸� ���� ��ȯ
	int getCurrentAnswerSize();

	//������ �׸� ���� �� ����
	void addCountInAnswer(int response);

	//���� ��� ���
	void printResult();

	//��� �� ��� ���� �� �ʱ�ȭ
	void resetAllCount();
};

