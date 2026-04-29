// 包含输入输出流库，用于 cin 和 cout
#include <iostream>
// 包含动态数组（向量）库，用于存储皇后位置
#include <vector>
// 包含数学库，用于 abs() 绝对值函数
#include <cmath>
// 使用标准命名空间，不用每次写 std::
using namespace std;

// N皇后问题类
class Nqueens
{
private:
    int n;                // 棋盘大小 n x n
    int solutionCount;    // 记录解法总数
    vector<int> x;        // 存储皇后位置：x[i] 表示第 i 行皇后放在第几列

public:
    // 构造函数：初始化棋盘大小、解法计数器、位置数组
    Nqueens(int size)
    {
        n = size;
        solutionCount = 0;
        x.resize(n + 1);  // 下标从 1 开始用，所以大小设为 n+1
    }

    // 判断第 k 行皇后放在 x[k] 列是否与前面已放的皇后冲突
    bool Place(int k)
    {
        // 遍历前面已经放好的所有皇后
        for(int j = 1; j < k; j++)
        {
            // 两种冲突情况：
            // 1. x[j] == x[k]：两个皇后在同一列
            // 2. abs(k-j) == abs(x[j]-x[k])：两个皇后在同一斜线
            if(x[j] == x[k] || abs(k - j) == abs(x[j] - x[k]))
            {
                return false;  // 冲突，不能放
            }
        }
        return true;  // 不冲突，可以放
    }

    // 回溯法核心函数：t 表示当前要放第几行
    void backtrack(int t)
    {
        // 递归出口：所有行都放完了（t > n），说明找到一组解
        if(t > n)
        {
            solutionCount++;  // 解法数 +1
            cout << "解法 " << solutionCount << ": ";
            // 输出这一组解：每一行皇后所在的列号
            for(int i = 1; i <= n; i++)
            {
                cout << x[i] << " ";
            }
            cout << endl;
        }
        // 还没放完，继续尝试放置
        else
        {
            // 尝试把第 t 行的皇后放在每一列（i 从 1 到 n）
            for(int i = 1; i <= n; i++)
            {
                x[t] = i;        // 把第 t 行皇后放在第 i 列
                if(Place(t))     // 如果这个位置不冲突
                {
                    backtrack(t + 1);  // 继续放下一行
                }
                // 回溯：自动回到上一步，尝试下一列
            }
        }
    }

    // 启动求解函数
    void Slove()
    {
        backtrack(1);  // 从第 1 行开始放皇后
        cout << "总共有 " << solutionCount << " 种摆法." << endl;
    }
};

// 主函数
int main() {
    system("chcp 65001");  // 设置控制台编码为UTF-8，解决中文乱码
    
    int n;
    cout << "请输入N皇后问题的N值:";
    cin >> n;              // 输入棋盘大小

    Nqueens solver(n);     // 创建N皇后求解对象
    solver.Slove();        // 开始求解

    return 0;
}