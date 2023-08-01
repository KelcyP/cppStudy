#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

//입력과 출력을 전방에 선언해두면 실질적 함수는 main 함수 아래 두어도 가능 (foward declaration, 전방선언)
int subtract(int a, int b);

int main()
{
    cout << add(1, 2) << endl; //함수 우클릭시 선언으로 이동, 정의로 이동 사용 가능

    return 0;
}

//definition 정의
int subtract(int a, int b) {
    return a - b;
}