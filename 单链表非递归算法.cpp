// 尾插法创建单链表
// 参数：arr 数组，n 数组长度
// 返回：创建好的单链表头指针
LinkList CreateList_Rear(int arr[], int n)
{
    // 创建一个临时头结点（方便尾插操作）
    LinkList f = (LNode *)malloc(sizeof(LNode));
    f->next = nullptr; // 初始化头结点的next为空

    LNode *rear = f; // 尾指针，始终指向链表最后一个节点

    // 循环将数组元素依次插入链表尾部
    for (int i = 0; i < n; i++)
    {
        LNode *p = (LNode *)malloc(sizeof(LNode)); // 新建一个节点
        p->data = arr[i];                          // 存入数组当前元素
        p->next = nullptr;                         // 新节点next置空
        rear->next = p;                            // 尾节点指向新节点
        rear = p;                                  // 尾指针后移
    }

    // 删除临时头结点，让f指向真正的第一个节点
    LNode *temp = f;
    f = f->next;
    free(temp); // 释放临时头结点

    return f; // 返回链表首元节点
}

// 释放单链表所有节点内存
// 参数：f 链表头指针
void FreeList(LinkList f)
{
    LNode *p;
    // 遍历链表，逐个释放节点
    while (f != nullptr)
    {
        p = f;       // p保存当前节点
        f = f->next; // 指针后移
        free(p);     // 释放当前节点
    }
}

// 题目1测试函数：测试链表最大值、平均值
void Test_Problem1()
{
    cout << "===== 题目1 单链表测试 =====" << endl;

    // 测试用数组
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    // 计算数组元素个数
    int n = sizeof(arr) / sizeof(arr[0]);

    // 调用尾插法创建链表
    LinkList f = CreateList_Rear(arr, n);

    // 测试最大值（非递归、递归）
    cout << "非递归求最大值：" << MaxList_NonRecursive(f) << endl;
    cout << "递归求最大值：" << MaxList_Recursive(f) << endl;

    // 测试平均值（非递归、递归）
    cout << "非递归求平均值：" << AvgList_NonRecursive(f) << endl;
    cout << "递归求平均值：" << AvgList_Recursive(f) << endl;

    FreeList(f); // 释放链表内存
    cout << endl;
}

// 主函数：程序入口
int main()
{
    Test_Problem1(); // 调用题目1测试
    return 0;        // 程序正常结束
}