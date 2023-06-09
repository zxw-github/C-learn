#include <stdio.h>

// 结构体的内存对齐
struct Node1
{
    char c; // 第一个成员在偏移量为0的地址处
    int a;  // int占4个字节，默认对齐数为8，取较小值为4，所以第二个成员在偏移量为4的地址处
    char b; // 占1个字节，默认对齐数为8，取较小值为1，放在偏移量为5的地址处
    // 最大对齐数是4，所占空间是4的整数倍，为12
};
struct Node2
{
    char a;
    char b;
};
struct Node3
{
    int a;
    char b;
};
int main(void)
{
    struct Node1 n;
    struct Node2 m;
    struct Node3 p;
    printf("%zd\n", sizeof(n)); // 12
    printf("%zd\n", sizeof(m)); // 2
    printf("%zd\n", sizeof(p)); // 8
    return 0;
}
// 结构体内存对齐规则：
/*
1.第一个成员在与结构体变量偏移量为0的地址处。
2.其他成员变量都放在对齐数（成员的大小和默认对齐数（8）的较小值）的整数倍的地址处。
3.结构体总大小为最大对齐数(每个成员变量都有一个对齐数 )的整数倍。
4.如果嵌套了结构体的情况,嵌套的结构体对齐到自己的最大对齐数的整数倍处,结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍。
*/

// 为了节省空间：让占用空间小的成员尽量集中在一起
