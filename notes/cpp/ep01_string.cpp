// cpp 有两种风格的字符串，一种是c风格的字符串，用数组定义和表示，另一种是c++风格的字符串，用string表示
// 使用C++风格的string需要包含头文件 <string>, 这个头文件在iostream中已经被包含了，但是不推荐这样用
#include "iostream"
#include "string" // 使用 string 类型之前需要包含头文件

using namespace std;

int main()
{
    // c风格的字符串
    char str1[] = "Hello, World! -powered by C.";
    cout << str1 << endl;

    // c++风格的字符串
    string str2 = "Hello, World! -powered by C++.";
    cout << str2 << endl;

    // 尝试输入字符串
    // cin 获取字符串会被空格截断
    string container;
    cin >> container;
    cout << container << endl;

    return 0;
}
