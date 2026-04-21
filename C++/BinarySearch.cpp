#include <iostream>    // 输入输出流头文件
#include <vector>      // 动态数组容器头文件
#include <algorithm>   // 算法库（本代码未直接使用，保留兼容）

using namespace std;

// ==============================
// 递归版二分检索算法（分治法实现）
// arr：有序数组的引用
// target：要查找的目标值
// left：查找区间左边界
// right：查找区间右边界
// 返回值：找到返回下标，未找到返回-1
// ==============================
int BinarySearch_Re(const vector<int> &arr, int target, int left, int right)
{
        // 递归终止条件：左边界 > 右边界，说明区间不存在，未找到目标
    if (left > right)
   
    {
                return -1;
           
    }

        // 计算中间位置，防止直接 (left+right)/2 导致溢出
    int mid = left + (right - left) / 2;

        // 找到目标值，返回当前下标
    if (arr[mid] == target)
   
    {
                return mid;
           
    }
        // 中间值 > 目标值，目标在左半区间，递归查找左侧
    else if (arr[mid] > target)
   
    {
                return BinarySearch_Re(arr, target, left, mid - 1);
           
    }
        // 中间值 < 目标值，目标在右半区间，递归查找右侧
    else    
    {
                return BinarySearch_Re(arr, target, mid + 1, right);
           
    }
}

// ==============================
// 非递归（迭代）版二分检索算法
// arr：有序数组
// target：要查找的目标值
// 返回值：找到返回下标，未找到返回-1
// ==============================
int BinarySearch_NoRe(const vector<int> &arr, int target)
{
        // 初始化左右边界
    int left = 0, right = arr.size() - 1;

        // 循环条件：区间有效
    while (left <= right)
   
    {
                // 计算中间位置
        int mid = left + (right - left) / 2;

                // 找到目标，返回下标
        if (arr[mid] == target)
       
        {
                        return mid;
                   
        }
                // 目标在左区间，调整右边界
        else if (arr[mid] > target)
       
        {
                        right = mid - 1;
                   
        }
                // 目标在右区间，调整左边界
        else        
        {
                        left = mid + 1;
                   
        }
           
    }

        // 循环结束未找到，返回-1
    return -1;
}

// ==============================
// 题目2测试函数：测试递归/非递归二分检索
// ==============================
void Test_Problem2()
{
        cout << "===== 题目2 二分检索测试 =====" << endl;

        // 定义有序数组（二分检索必须有序）
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

        // 定义两个测试目标：7存在，4不存在
    int target1 = 7, target2 = 4;

        // --------------------
    // 递归版测试
    // --------------------
    // 查找存在的元素
    int idx1 = BinarySearch_Re(arr, target1, 0, arr.size() - 1);
        // 查找不存在的元素
    int idx2 = BinarySearch_Re(arr, target2, 0, arr.size() - 1);
        cout << "递归版：目标" << target1 << "的下标为" << idx1 << endl;
        cout << "递归版：目标" << target2 << "的下标为" << idx2 << endl;

        // --------------------
    // 非递归版测试
    // --------------------
    idx1 = BinarySearch_NoRe(arr, target1);
        idx2 = BinarySearch_NoRe(arr, target2);
        cout << "非递归版：目标" << target1 << "的下标为" << idx1 << endl;
        cout << "非递归版：目标" << target2 << "的下标为" << idx2 << endl;

        // --------------------
    // 算法复杂度分析输出
    // --------------------
    cout << "\n===== 二分检索复杂度分析 =====" << endl;
        cout << "时间复杂度：O(log₂n)，每次检索将问题规模减半，最多执行log₂n次比较" << endl;
        cout << "空间复杂度：递归版O(log₂n)（递归栈开销），非递归版O(1)（仅用常数变量）" << endl;
        cout << endl;
}

// ==============================
// 主函数：程序入口
// ==============================
int main()
{
        Test_Problem2();
      // 调用题目2测试函数
    return 0;
            // 程序正常结束
}