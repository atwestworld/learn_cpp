#include <iostream>
#include <functional>
#include <typeinfo>

using namespace std;

int main() {
    const int a = 10;
    int temp = 20;
    int& b = temp;
    const int& c = 30;
    int* d = new int(40);

    decltype(a) aa = 10;
    decltype(b) bb = temp;
    decltype(c) cc = 30;
    auto dd = d;

    cout << "type of aa is:" << typeid(aa).name() << endl;
    cout << "type of bb is:" << typeid(bb).name() << endl;
    cout << "type of cc is:" << typeid(cc).name() << endl;
    cout << "type of dd is:" << typeid(dd).name() << endl;
}