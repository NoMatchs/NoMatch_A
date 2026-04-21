import math

Input = input("请输入一个非负整数：")

number = int(Input)

if(number < 0) :
    print("Error!")

res = math.sqrt(number)

print(f"{number} 的平方根是：{res:.4f}")