#include <functional>

void foo(int& val) {
    // 函数体
}

int main() {
    foo(std::ref(20));  // 正确，但是 20 是一个临时对象
    return 0;
}