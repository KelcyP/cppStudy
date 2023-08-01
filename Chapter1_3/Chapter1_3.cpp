#include <iostream>

int main()
{
	/*
	int x;
	x = 123; // = < asignment operator (대입연산자), x라는 변수 이름이 가르키고있는 메모리 공간에 123이라는 정수를 저장해놓는다 라는 의미

	std::cout << x << std::endl;
	std::cout << &x << std::endl; // 실제로 메모리에서 어떤 주소를 갖는가 를 보여줌
	

	//int x; < x값을 초기화하지 않았기 때문에 오류발생, release 에서는 0으로 대입하여 실행됨!! 주의
	int x = 123; //initialization

	x = 5; // assignment

	std::cout << x << std::endl;
	*/

	int x = 1;
	x = x + 2;
	std::cout << x << std::endl; // 3

	int y = x;
	std::cout << x + y << std::endl; // 6

	std::cout << x << std::endl; // 3

	//int z;
	int z = 0;
	std::cout << z << std::endl; // error, 0

	return 0;
}