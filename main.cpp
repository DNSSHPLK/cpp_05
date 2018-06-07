#include <iostream>
#include <string>
using namespace std;

string hello() {
    return "Hello";
}

void show(string str) {
    cout << str;
}

void repeat_show(string str, int n) {
    for (int i = 0; i < n; ++i)
        show(str);
    cout << endl;
}

int multiply(int a, int b) {
    return a * b;
}

int five(int a = 0) {
    return 5;
}

int power(int num, int pow) {
    int result = 1;
    for (int i = 0; i < pow; ++i)
        result *= num;
    return result;
}

void alpha(char a) {
    if (a < 'h')
        cout << "LESS" << endl;
    else if (a > 'o')
        cout << "MORE" << endl;
    else
        cout << "JUST RIGHT" << endl;
}

int main()
{
//    show("qwerty");
//    cout << endl;
//    repeat_show("Game Over", 10);
//    repeat_show(hello(), 10);
//    cout << power(2, 3) << endl;
//    cout << multiply(10, 10) << endl;
//    cout << multiply(10, power(2, 2)) << endl;
//    cout << multiply(five(), 10) << endl;
//    cout << multiply(multiply(3, 3), 10) << endl;
//    cout << multiply(five(10), five(5)) << endl;
//    cout << multiply(power(five(0), 2), 2) << endl;
//    cout << multiply(power(2, 3) - 8, 12345) << endl;
//    cout << five(multiply(power(10, 25), power(90, 23)) + 255) << endl;


    return 0;
}