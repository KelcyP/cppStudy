#include <iostream>

namespace MySpace1 // namespace 안에 두면 같은 함수명이라도 사용 가능
{
    namespace InnerSpace // namespace 안에 namespace 정의 가능
    {
        int my_function()
        {
            return 0;
        }
    }
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

int doSomething(int a, int b)
{
    return a * b;
}

using namespace std;
using namespace MySpace1::InnerSpace;

int main()
{

    my_function();

    //cout << MySpace1::doSomething(3, 4) << endl;
    //cout << doSomething(3, 4) << endl;

    return 0;
}
