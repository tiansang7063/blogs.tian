/*
这个文件用来练习C++跨文件调用函数的方法。被跨文件调用的函数定义在`ep03_help_kit.cpp`中。
函数份文件编写一般有四个步骤：
1、创建头文件.h；
2、创建源文件.cpp；
3、头文件中编写函数声明；
4、源文件中编写函数定义；
*/
#include <iostream>
#include "ep03_help_kit.h" // 引用头文件，注意，头文件和源文件需要有一些特殊操作。

using namespace std;

int main(void)
{
    int a = 10, b = 20;
    swap(&a, &b); // 引入头文件后，就可以直接调用对应源文件中定义的函数
    cout << a << ", " << b << endl;
    return 0;
}
