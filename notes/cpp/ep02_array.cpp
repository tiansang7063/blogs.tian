// 这个文件用来说一下数组，数组名本身就是一个指针，所以可以直接用 cout 输出数组名，以获取到对应数组的地址
// 另外注意，数组名是一个常量，不可以进行赋值操作。
#include <iostream>

using namespace std;

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5};
    cout << arr << endl; // 直接输出数组名，会打印出来数组的起始地址。
    cout << (int)arr << endl;
    return 0;
}
