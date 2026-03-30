# import math

# x = 1
# y = 2
# z = 0.5

# numerator = 3 * x + 4 * math.sqrt(x**2 + 2*y**2)

# denominator = 1 + math.cos(z**3)

# if(denominator == 0) :
#     print("Error!")
# else:
#     result = numerator / denominator
#     print(f"当 x={x}, y={y}, z={z} 时， 表达式的结果位：{result}")















# import math

# a = 1
# b = 4
# c = 3

# delta = b**2 - 4*a*c

# x1 = (-b + math.sqrt(delta)) / (2*a)
# x2 = (b + math.sqrt(delta)) / (2*a)

# print("x1 = {}, x2 = {}".format(x1,x2))















# str1 = "君子之行，勤以修身，俭以养德，非淡泊无以明志，非宁静无以致远"

# print("原始字符串：", str1)

# print("'静' 的索引值:", str1.index('静'))
# print("'俭' 的索引值:", str1.index('俭'))

# print("字符 '静':", str1[25])
# print("字符 '俭':", str1[10])

# print("子串 '修身':", str1[7:9])
# print("子串 '养德':", str1[12:14])















# a = float(input("请输入变量 a: "))
# b = float(input("请输入变量 b: "))
# c = float(input("请输入变量 c: "))
# d = float(input("请输入变量 d: "))

# if d == 0:
#     print("错误：分母 d 不能为 0！")
# else:
#     f = ((a + b) * c) / d
#     print(f"计算结果 f = {f}")
















list1 = [1,2,3,4,5,6,7,8,9,10]

list2 = list(filter(lambda x: x % 2 == 1, list1))
list3 = list(filter(lambda x: x % 2 == 0, list1))

list4 = list(map(lambda x, y: x * 10 + y, list2,list3))

print("list2 (奇数):", list2)
print("list3 (偶数):", list3)
print("list4 (组合结果):", list4)