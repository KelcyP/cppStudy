#include <iostream>

int main()
{
	/*
	int x;
	x = 123; // = < asignment operator (���Կ�����), x��� ���� �̸��� ����Ű���ִ� �޸� ������ 123�̶�� ������ �����س��´� ��� �ǹ�

	std::cout << x << std::endl;
	std::cout << &x << std::endl; // ������ �޸𸮿��� � �ּҸ� ���°� �� ������
	

	//int x; < x���� �ʱ�ȭ���� �ʾұ� ������ �����߻�, release ������ 0���� �����Ͽ� �����!! ����
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