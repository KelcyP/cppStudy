#include <iostream>
#include <algorithm>

//요즘은 매크로보다는 function 을 자주 사용하긴 함

#define MY_NUMBER 9 //매크로, 뒤에 넣은 값으로 대체함, 보통 대문자로 작성
#define MY_WORD "Hello, World" //값은 상관없음
#define MAX(a, b) (((a)>(b)) ? (a) : (b)) //Max 값 구하는 매크로, a와 b에 뭐가 들어갈지 모르기 때문에 묶어주는게 좋음
#define LIKE_APPLE 

void doSomething() //doSomething 을 다른 cpp 안에 사용하게 되면, 상단의 #define LIKE_APPLE 은 영향 범위가 아님, Orange 출력
{
    using namespace std;

#ifdef LIKE_APPLE //전처리기 안에서는 뒤에것을 대체하지 않음
    cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE
    cout << "Orange" << endl;
#endif

    /*
    =
    #ifdef LIKE_APPLE
        cout << "Apple" << endl;
    #else
        cout << "Orange" << endl;
    #endif
    */
}

int main()
{
    using namespace std;

    cout << MY_NUMBER << endl;
    cout << MY_WORD << endl;
    cout << MAX(3 + 4, 5) << endl;

    cout << max(1 + 3, 2) << endl; //스탠다드 라이브러리인 algorithm 에서 가져옴

    doSomething();

    return 0;
}
