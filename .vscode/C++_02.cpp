// #include <iostream>
// #include <string>
// using namespace std;

// class airCondition
// {
// private:
//     string brand;
//     string color;
//     float power;
//     bool isOn;
//     int temperature;

// public:
//     airCondition(string b,string c,float p, int t)
//     : brand(b), color(c),power(p),temperature(t),isOn(false) {}

//     void toggleSwitch()
//     {
//         isOn = !isOn;
//         if(isOn)
//         {
//             cout << "空调已打开"  << endl;
//         }
//         else
//         {
//             cout << "空调已关闭" << endl;
//         }
//     }

//     void warmUp()
//     {
//         if(!isOn)
//         {
//             cout << "空调未开启，无法升温" << endl;
//             return;
//         }
//         temperature++;
//         cout << "升温后温度：" << temperature << "C" << endl;
//     }
//      void coolUp()
//     {
//         if(!isOn)
//         {
//             cout << "空调未开启，无法降温" << endl;
//             return;
//         }
//         temperature++;
//         cout << "降温后温度：" << temperature << "C" << endl;
//     }
//     void showStatus() const
//     {
//         cout << "\n===== 空调状态 =====" << endl;
//         cout << "品牌：" << brand << endl;
//         cout << "颜色：" << color << endl;
//         cout << "功率：" << power << endl;
//         cout << "开关状态：" << (isOn ? "开启" : "关闭") << endl;
//         cout << "当前设定温度：" << temperature << "C" << endl;
//     }
// };

// int main() {

//     airCondition myAir("格力","白色",2,25);

//     myAir.toggleSwitch();

//     for(int i = 0;i < 5;i++)
//     {
//         myAir.coolUp();
//     }
//     myAir.showStatus();
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student
{
private:
    string id;
    string name;
    float score;

public:
    Student(string i = "", string n = "", float s = 0)
        : id(i), name(n), score(s) {}

    float getScore() const
    {
        return score;
    }

    void showInfo() const
    {
        cout << "学号：" << id << " 姓名：" << name << " 成绩：" << score << endl;
    }
};

bool compare(const Student &a, const Student &b)
{
    return a.getScore() < b.getScore();
}

int main()
{

    Student students[] = {
        Student("2023001", "张三", 85.5),
        Student("2023002", "李四", 92.0),
        Student("2023003", "王五", 78.0),
        Student("2023004", "赵六", 95.5),
        Student("2023005", "孙七", 88.0)};

    int n = sizeof(students) / sizeof(students[0]);

    cout << "排序前的学生信息：" << endl;
    for (int i = 0; i < n; i++)
    {
        students[i].showInfo();
    }

    sort(students, students + n, compare);

    cout << "排序后的学生信息：" << endl;

    for (int i = 0; i < n; i++)
    {
        students[i].showInfo();
    }
    return 0;
}