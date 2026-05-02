#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
    Person(char *Name, int Age);
    ~Person();
    // 拷贝构造函数（深拷贝，兼容左值场景）
    Person(const Person& other);
    // 移动构造函数（右值引用，转移资源所有权）
    Person(Person&& other) noexcept;
    // 拷贝赋值运算符（深拷贝）
    Person& operator=(const Person& other);
    // 移动赋值运算符（右值引用，转移资源所有权）
    Person& operator=(Person&& other) noexcept;
    void print();
private:
    char *name;
    int age;
};

// 普通构造函数
Person::Person(char *Name, int Age) {
    name = new char[strlen(Name) + 1];
    strcpy(name, Name);
    age = Age;
    cout << "The constructor of Person is called!" << endl;
}

// 析构函数
Person::~Person() {
    delete[] name;
    cout << "The destructor of Person is called!" << endl;
}

// 拷贝构造函数（深拷贝，避免浅拷贝问题）
Person::Person(const Person& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    age = other.age;
    cout << "Copy constructor of Person is called!" << endl;
}

// 移动构造函数（右值引用，转移资源）
Person::Person(Person&& other) noexcept {
    // 直接窃取other的资源，无需重新分配内存
    name = other.name;
    age = other.age;
    // 将other的指针置空，避免other析构时释放已转移的内存
    other.name = nullptr;
    cout << "Move constructor of Person is called!" << endl;
}

// 拷贝赋值运算符（深拷贝）
Person& Person::operator=(const Person& other) {
    if (this != &other) {
        // 释放当前对象的旧内存
        delete[] name;
        // 分配新内存并复制内容
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        age = other.age;
    }
    cout << "Copy assignment operator of Person is called!" << endl;
    return *this;
}

// 移动赋值运算符（右值引用，转移资源）
Person& Person::operator=(Person&& other) noexcept {
    if (this != &other) {
        // 释放当前对象的旧内存
        delete[] name;
        // 直接窃取other的资源
        name = other.name;
        age = other.age;
        // 将other的指针置空
        other.name = nullptr;
    }
    cout << "Move assignment operator of Person is called!" << endl;
    return *this;
}

void Person::print() {
    cout << "Name: " << (name ? name : "nullptr") << ", Age: " << age << endl;
}

int main() {
    Person p1("Alice", 20);
    Person p2 = p1;          // 调用拷贝构造（左值场景，深拷贝）
    Person p3 = move(p1);    // 调用移动构造（右值场景，转移资源，p1.name变为nullptr）
    p2.print();
    p3.print();
    p1.print(); // 输出nullptr，p1已不再持有资源，析构时不会释放有效内存
    return 0;
}