#include<stdio.h>
#include<thread>
#include<functional>
#include<iostream>


//#include<algorithm>
//#include<vector>
//#include<list>
//#include<array>

//void Double(int num) {
//	num *= 2;
//	printf("num * 2: %d\n", num);
//}
//void AddTwo(int num) {
//	num += 2;
//	printf("num + 2: %d\n", num);
//}

using namespace std;


void display(int i) { cout << i << endl; }

//void Qudruple(int num) {
//	num *= 4;
//	std::cout << "thread id = " << std::this_thread::get_id() << std::endl;
//	std::cout << "num * 4 = " << num << std::endl;
//
//}

//void AddFour(int num) {
//	num += 4;
//	std::cout << "thread id = " << std::this_thread::get_id() << std::endl;
//	std::cout << "num + 4 = " << num << std::endl;
//
//}

void DivisionThree(int num) {
	num /= 3;
	//std::cout << "thread id = " << std::this_thread::get_id() << std::endl;
	std::cout << "thread " << num << std::endl;

}

void SubtractionOne(int num) {
	num -= 1;
	//std::cout << "thread id = " << std::this_thread::get_id() << std::endl;
	std::cout << "thread " << num << std::endl;

}

void MultiplicationOne(int num) {
	num *= 1;
	//std::cout << "thread id = " << std::this_thread::get_id() << std::endl;
	std::cout << "thread " << num << std::endl;

}

int main() {
	int num = 3;

	//std::function<void(int)>Triple = [=](int num) {
	//	num *= 3;
	//	printf("num * 3: %d\n", num);
	//};

		
	//std::function<void(int)>AddThree = [=](int num) {
	//	num += 3;
	//	printf("num * 3: %d\n", num);
	//};

	//std::thread th1(Triple, num);
	//std::thread th2(AddThree, num);

	//std::thread th1(Double, num);
	//std::thread th2(AddTwo, num);

	std::thread th1(DivisionThree, num);

	th1.join();

	std::thread th2(SubtractionOne, num);

	th2.join();

	std::thread th3(MultiplicationOne, num);

	th3.join();

	return 0;
}
