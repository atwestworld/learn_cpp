#include <iostream>

using namespace std;

template <typename T>                       /* 类模板 */
class TemplateClass {
    public:
        T getVal() const;
        void setVal(T val);
    private:
        T val;
};

template <typename T>
T TemplateClass<T>::getVal() const {
    return val;
}

template <typename T>
void TemplateClass<T>::setVal(T val) {
    this->val = val;
}

template <typename T, typename U>
auto add(T t, U u) -> decltype(t + u) {     /* 函数模板，返回类型后置 */
    return t + u;
}



int main() {
    TemplateClass<int> intObj;              /* 模板类 */
    intObj.setVal(10);
    cout << intObj.getVal() << endl;

    TemplateClass<double> doubleObj;
    doubleObj.setVal(3.14);
    cout << doubleObj.getVal() << endl;

    int a = 1;
    double b = 2.2;
    cout << add(a, b) << endl;               /* 模板函数 */
}
