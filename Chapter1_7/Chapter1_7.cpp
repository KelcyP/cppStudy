#include <iostream>

using namespace std;

int level = 1;

void doSomething(int x) {
    x = 123;
    cout << x << endl;
}

int doSomething2(int x) {
    x = 123;
    cout << x << " " << &x << endl;

    return x;
}

int levelup(int x) {
    level = level + x;

    cout << "currenet level " << level << endl;

    return x;
}

int main()
{
    int x(0); // x = 0; , 이렇게 초기화 해놓은 것은 중괄호{} 밖을 벗어나면 사라짐
    //int x = 1; < 이중정의 불가능

    cout << x << " " << &x << endl;

    {
        // 지역변수 - 영역을 벗어나면 사용 불가, 지역변수가 차지하고 있던 메모리는 그 지역변수가 영역을 벗어날 때 스택메모리로 반납됨
        int x = 1; //다른 중괄호 안에 있기 때문에 상위 x와는 다른 식별자 (다른 메모리에 저장)

        cout << x << " " << &x << endl;
    }

    cout << x << " " << &x << endl;

    {
        // 중괄호 안이더라도 초기화 하지 않으면 같은 메모리에 대한 식별자
        x = 2;

        cout << x << " " << &x << endl;
    }

    cout << x << " " << &x << endl;

    x = 0;
    
    cout << x << endl; // 0 
    doSomething(x); // 123
    cout << x << " " << &x << endl; // 0
    doSomething2(x); // 123
    cout << x << " " << &x << endl; // 0

    {
        x = 123;
        cout << x << endl; // 123
    }

    cout << x << endl; // 123\


    cout << level << endl;
    levelup(1);
    levelup(2);
    levelup(3);
    cout << level << endl;

    return 0;
}
