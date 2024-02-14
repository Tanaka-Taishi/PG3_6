#include<stdio.h>
#include<thread>
#include<functional>
#include<iostream>


using namespace std;


void display(int i) { cout << i << endl; }

void DivisionThree(int num) {
	num /= 3;
	std::cout << "thread " << num << std::endl;

}


void SubtractionOne(int num) {
	num -= 1;
	std::cout << "thread " << num << std::endl;

}

void MultiplicationOne(int num) {
	num *= 1;
	std::cout << "thread " << num << std::endl;

}

int main() {
	int num = 3;

	std::thread th1(DivisionThree, num);

	th1.join();

	std::thread th2(SubtractionOne, num);

	th2.join();

	std::thread th3(MultiplicationOne, num);

	th3.join();

	return 0;
}
