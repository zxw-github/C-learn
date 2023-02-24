// 8.10计算器.c -- 实现加、减、乘、除计算
#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    return x / y;
}
void menu()
{
    printf("************************\n");
    printf("***  1.add   2.sub  ****\n");
    printf("***  3.mul   4.div  ****\n");
    printf("********  0.exit  ******\n");
    printf("************************\n");
}
int main(void)
{
    int input = 0;
    do
    {
        menu();
        int a = 0, b = 0, ret = 0;
        printf("请输入选项:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("请输入两个操作数：");
            scanf("%d %d", &a, &b);
            ret = add(a, b);
            printf("%d\n", ret);
            break;
        case 2:
            printf("请输入两个操作数：");
            scanf("%d %d", &a, &b);
            ret = sub(a, b);
            printf("%d\n", ret);
            break;
        case 3:
            printf("请输入两个操作数：");
            scanf("%d %d", &a, &b);
            ret = mul(a, b);
            printf("%d\n", ret);
            break;
        case 4:
            printf("请输入两个操作数：");
            scanf("%d %d", &a, &b);
            ret = div(a, b);
            printf("%d\n", ret);
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("输入错误，请重新选择\n");
            break;
        }

    } while (input);
    return 0;
}