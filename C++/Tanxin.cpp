// 包含输入输出流头文件，用于控制台输入输出
#include <iostream>
// 包含vector容器头文件，用于存储活动列表
#include <vector>
// 包含算法头文件，用于sort排序
#include <algorithm>
// 使用标准命名空间，避免每次写std::
using namespace std;

// 定义活动结构体，存储每个活动的信息
struct Activity
{
    int id;      // 活动编号（从1开始）
    int start;   // 活动开始时间
    int end;     // 活动结束时间
};

// 排序比较函数：按活动的结束时间升序排序
// 贪心策略核心：优先选结束早的活动
bool compare(const Activity& a, const Activity& b)
{
    return a.end < b.end;
}

int main() {
    // 定义变量n，表示活动总数
    int n;
    cout << "请输入活动总数n: ";
    cin >> n;

    // 创建vector容器，存储n个活动
    vector<Activity> activities(n);

    // 循环输入每个活动的开始时间、结束时间，并给活动编号
    for(int i = 0;i < n;i++)
    {
        activities[i].id = i + 1;
        cout << "请输入活动" << i + 1 << "的开始时间和结束时间：";
        cin >> activities[i].start >> activities[i].end;
    }

    // 对活动按结束时间升序排序
    sort(activities.begin(),activities.end(),compare);

    // 定义selected容器，存放最终选中的活动
    vector<Activity> selected;
    // 记录上一个选中活动的结束时间，初始为-1，保证第一个活动一定能选
    int lastend = -1;

    // 贪心选择：遍历所有活动，挑选不冲突的活动
    for(int i = 0;i < n;i++)
    {
        // 如果当前活动的开始时间 >= 上一个活动的结束时间，说明不冲突，可以选
        if(activities[i].start >= lastend)
        {
            selected.push_back(activities[i]);  // 加入选中列表
            lastend = activities[i].end;        // 更新上一个结束时间
        }
    }

    // 输出结果：最多可安排的活动数量
    cout << "\n最多可安排的活动数量为：" << selected.size() << endl;
    cout << "选中的活动编号及时间区间为：" << endl;

    // 遍历输出每个选中的活动信息
    for(auto& act : selected)
    {
        cout << "活动" << act.id << ":["  << act.start << "," << act.end << ")" << endl;
    } 
    
    return 0;
}