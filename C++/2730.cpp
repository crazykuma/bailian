/* 2730:求20以内n的阶乘
查看提交统计提示提问
总时间限制: 1000ms 内存限制: 65536kB
描述
求20以内n的阶乘。
输入
只有一行输入，整数n（n<=20）。
输出
只有一行输出，数值n!。
样例输入
16
样例输出
20922789888000
来源
JP06 */
#include <iostream>
using namespace std;
long long Factorial(int n){
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
    int n;
    long long result;
    cin >> n;
    result = Factorial(n);
    cout << result << endl;
    return 0;
}