#include "ep03_help_kit.h" // 源文件中需要包含头文件

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    cout << "this is `swap` func" << endl;
}