# import random

# list1 = [random.randint(1,100) for _ in range(10)]
# print("原列表list1: ",list1)

# list2 = []

# for num in list1:
#     if num % 2 == 1:
#         list2.append(num ** 2)
#     else:
#         list2.append(num ** 3)
# print("列表list2:",list2)

# set1 = {2,5,9,1,3}
# set2 = {3,6,8,2,5}

# print("原set1: ",set1)
# print("原set2: ",set2)

# set1.add(7)
# print("添加之后：", set1)

# union_set = set1 | set2
# print("并集：" ,union_set)

# inter_set = set1 & set2
# print("交集：",inter_set)

# diff_set = set1 - set2
# print("差集：", diff_set)

# print("4在set1中嘛？", 4 in set1)
# print("4在set2中嘛？", 4 in set2)

# fee_dict = {
#     "早餐": 8,
#     "中餐": 15,
#     "晚餐": 20,
#     "其他费用": 10
# }

# print("生活费用明细：")
# for key, value in fee_dict.items():
#     print(f"{key}:{value} 元")

# fee_total = sum(fee_dict.values())
# print(f"\n一天总费用：{fee_total} 元")

score_dict = {
    "2025001": 85,
    "2025002": 92,
    "2025003": 78
}

print("初始成绩表：",score_dict)

new_id = "2025004"
new_score = 90
score_dict[new_id] = new_score
print(f"添加{new_id}成绩后的表",score_dict)

modify_id = "2025002"
score_dict[modify_id] = 95
print(f"修改{modify_id}成绩后的表",score_dict)

del_id = "2025001"
del score_dict[del_id]
print(f"删除{del_id}成绩后的表：",score_dict)

query_id = "2025003"
if query_id in score_dict:
    print(f"{query_id}的成绩是：{score_dict[query_id]}")
else:
    print(f"未找到学号{query_id}的学生")
