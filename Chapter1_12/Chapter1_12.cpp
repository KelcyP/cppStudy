#include <iostream>
#include "my_work.h"
#include "add.h"
/*
상단처럼 헤더파일 불러오게 되면
my_work.h 에서
add()와 doSomething()을 불러오게 되고
add.h 에서
add()를 한번 더 불러오게 됨
*/


using namespace std;

int main()
{
	doSometing();

	return 0;
}