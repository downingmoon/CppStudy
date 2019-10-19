#include "Answer.h"

Answer::Answer(string answer) {
	this->answer = answer;
}

string Answer::getAnswer() {
	return this->answer;
}

void Answer::addCount() {
	this->count++;
}

int Answer::getCount() {
	return this->count;
}

void Answer::resetCount() {
	this->count = 0;
}