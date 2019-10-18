#include <string>
#include <iostream>

using namespace std;
class Survey {

private:
	string question;
	string answerArray[];
public:

	/*
	 * ���� �߰�
	*/
	void addQuestion(string question);

	/*
	 * �����׸� ���� ����
	*/
	void setAnswerSize(int size);

	/*
	 * �����׸� �߰�
	*/
	void addAnswer();

	/*
	 * ���� / �����׸� ���
	*/
	void printQnA();

	/*
	 * ���� ����
	*/
	void responseAnswer();

	/*
	 * ���� ���� ��� ���
	*/
	void printResult();

	/*
	 * ���� ���� �� �ʱ�ȭ
	*/
	void resetAnswerCount();
};