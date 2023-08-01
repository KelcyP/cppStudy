#include <iostream>

using namespace std;

// 함수명 우클릭 > rename(이름 바꾸기) > 함수명 바꾸면 main에 있는 함수명도 바뀜!!
/*
int addTwoNumbers(int num_a, int num_b)
{
    int sum = num_a + num_b;

    return sum;
}
*/

// 함수 안에 함수 선언 불가능!

void print()
{
    cout << "Done!" << endl;
}

int addTwoNumbers(int a, int b)
{
    print();
    return a + b;
}

int multiplyTwoNumbers(int num_a, int num_b)
{
    int sum = num_a * num_b;

    return sum;
}

void printHelloWorld()
{
    cout << "Hello World" << endl;
    // main에 반환해줘야 할 값이 없기 때문에 void로 설정, return 해 줄 것 없음 (기능만 수행)
    return;
    // 선택의 문제, 사용 안해도 됨 (반환값 없음) but! return 만나면 무조건 반환하기 때문에 하위 명령어들 실행 X
    cout << "Hello World 2" << endl;
}

int main()
{
    cout << addTwoNumbers(1, 2) << endl; // 1, 2 등등 = 함수 안에 들어가는 '인수'
    cout << addTwoNumbers(3, 4) << endl;
    cout << multiplyTwoNumbers(8, 13) << endl;

    int sum = addTwoNumbers(1, 2);

    printHelloWorld();

    return 0;
}