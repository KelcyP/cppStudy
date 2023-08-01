#include <iostream>

using namespace std;

int main()
{
    int x = 2; // x 는 variavle(변수), 2 는 literal(리터럴), = 는 Assignment(대입연산자)

    cout << x + 2 << endl; // x 는 리터럴, 2 는 리터럴, + 는 operator(연산자) , x 와 2 는 operand(피연산자), 1 + 2 는 expression(표현식)

    /*
    일항, 이항, 삼항 연산자

    일항 > -1, -x 등 operand 가 1개인 연산자
    이항 > 1 + 2, x / 4 등 operand 가 2개인 연산자
    삼항 > 조건 연산자는 c++의 유일한 삼항연산자, (x > 0) ? 1 : 2
                                                 조건    참  거짓
    */

    cout << "Hello, World" << endl;

    return 0;
}
