#pragma once
#include <string>

using namespace std;
class Answer {
private:
	//�����׸�(�亯)
	string answer;
	//���� ��
	int count = 0;

public:
	//������
	Answer(string answer);

	//����� �����׸� Ȯ��
	string getAnswer();

	//����
	void addCount();

	//���� �� Ȯ��
	int getCount();

	//���� �ʱ�ȭ
	void resetCount();
};

