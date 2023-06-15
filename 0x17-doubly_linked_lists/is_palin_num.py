#!/usr/bin/python3
def is_palin_num(number):
    num = str(number)
    i = 0
    j = len(num) - 1
    while i < len(num) and j > -1:
        if num[i] != num[j]:
            return False
        i += 1
        j -= 1
    return True
first_num = 0
sec_num = 0
prod = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        if is_palin_num(i * j) and i * j > prod:
            first_num = i
            sec_num = j
            prod = i * j
print("{} * {} = {}".format(first_num, sec_num, prod))

