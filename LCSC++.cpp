#include <iostream>   // 输入输出流头文件
#include <vector>     // 动态数组容器，用于存储DP矩阵
#include <string>     // 字符串处理头文件
#include <algorithm>  // 提供max()、reverse()函数

using namespace std;

// 函数功能：打印动态规划DP表格
// 参数：dp-动态规划矩阵，x-第一个序列，y-第二个序列
void printDPTable(const vector<vector<int>>& dp, const string& x, const string& y)
{
    int m = x.size();  // x序列长度
    int n = y.size();  // y序列长度

    // 打印表头：输出y序列的每个字符作为列标题
    cout << "\t";
    for(char c : y) cout << c << "\t";
    cout << endl;

    // 遍历DP矩阵的每一行
    for(int i = 0;i <= m;i++)
    {
        // 第0行：行首空出一个制表位（对应初始行）
        if(i == 0) cout << "\t";
        // 非0行：行首输出x序列对应字符
        else
        {
            cout << x[i-1] << "\t";
        }

        // 打印当前行的所有DP值
        for(int j = 0;j <= n;j++)
        {
            cout << dp[i][j] << '\t';
        }
        cout << endl;  // 一行打印完毕，换行
    }
}

// 函数功能：求解最长公共子序列 LCS
// 返回值：pair(最长长度, 最长公共子序列字符串)
pair<int,string> LCS(const string& x,const string& y,vector<vector<int>>& dp)
{
    int m = x.size();
    int n = y.size();

    // 初始化DP矩阵：(m+1)行 (n+1)列，全部初始化为0
    dp.assign(m+1,vector<int>(n+1,0));

    // 动态规划填表：按状态转移方程填充DP表
    for(int i = 1;i <= m;i++)
    {
        for(int j = 1;j <=n;j++)
        {
            // 如果当前两个字符相等
            if(x[i-1] == y[j-1])
            {
                // 状态转移：左上角值 + 1
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else  // 字符不相等
            {
                // 取上方/左方最大值
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    // 回溯构造 LCS 序列
    string lcs;
    int i = m, j = n;  // 从矩阵右下角开始回溯

    while(i > 0 && j > 0)
    {
        // 字符相等：属于LCS，加入结果，同时向左上方移动
        if(x[i-1] == y[j-1])
        {
            lcs.push_back(x[i-1]);
            i--;
            j--;
        }
        // 上方值更大：向上移动
        else if(dp[i-1][j] > dp[i][j-1])
        {
            i--;
        }
        // 左方值更大：向左移动
        else
        {
            j--;
        }
    }

    // 回溯得到的序列是逆序，反转得到正序LCS
    reverse(lcs.begin(),lcs.end());

    // 返回 LCS 长度和序列
    return {dp[m][n],lcs};
}

// 主函数：程序入口
int main()
{
    // 定义两个输入序列
    string x = "ABCBDAB";
    string y = "BDCABA";

    vector<vector<int>> dp;  // DP矩阵

    // 调用LCS函数计算结果
    auto result = LCS(x,y,dp);
    int lcslength = result.first;    // LCS长度
    string lcsStr = result.second;   // LCS具体序列

    // ========== 输出实验结果 ==========
    cout << "===== 最长公共子序列（LCS）实验结果 =====" << endl;

    // (1) 输出LCS长度
    cout << "\n(1) LCS的长度：" << lcslength << endl;

    // (2) 输出LCS具体序列
    cout << "(2) 具体的LCS序列：" << lcsStr << endl;

    // (3) 输出DP矩阵
    cout << "\n(3) 动态规划DP矩阵（行对应X，列对应Y）：" << endl;
    printDPTable(dp, x, y);

    return 0;
}