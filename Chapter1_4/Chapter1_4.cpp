#include <iostream> // cout, cin, endl, ...
#include <cstdio>   // printf

int main()
{
    using namespace std; // 이렇게 설정해두면 중괄호 안 한정 std:: 를 사용하지 않아도 됨

    // 출력

    int x = 1024;
    double pi = 3.141592;
    std::cout << "I love you\n\n\n"; // << std::endl;
    /*
    cout 은 std 안에 있는 것, << 전에 cout 이 있는건 물결 (stream, <<) 을 타고 문장이 cout 으로 간다고 이해하면 쉬움, << 는 output operator 라고도 부름
    */

    std::cout << "x is " << x << " pi is " << pi << std::endl;

    std::cout << "abc" << "\t" << "def" << std::endl;
    std::cout << "ab" << "\t" << "cdef" << std::endl;
    //cout << "\a";
    // \t = tab 적용, 보통 \가 들어가면 기능 있는 string 으로 생각
    // \n = 줄바꿈, endl 과 동일 기능
    // \a = audio 출력
    
    //입력
    
    int ix = 1;

    cout << "Before your input, x was " << x << endl;

    cin >> ix;

    cout << "Your input is " << ix << endl;

    return 0;

}
