/* 2684:求阶乘的和
查看提交统计提示提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定正整数n，求不大于n的正整数的阶乘的和（即求1!+2!+3!+...+n!）

输入
输入有一行，包含一个正整数n（1 < n < 12）。
输出
输出有一行：阶乘的和。
样例输入
5
样例输出
153
来源
计算概论05 */
#include <iostream>
using namespace std;
int Factorial(int n){
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*Factorial(n-1);
    }
    
    
}

int main(){
    int n=0,result=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        result=result+Factorial(i);
    }
    cout << result << endl;
    return 0;
}