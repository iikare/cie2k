ent = []
with open('gen/data.txt') as raw_data:
    for line in raw_data:
        # print (line.strip())
        ent.append(line.strip())

# print(ent)


print("#pragma once")
print("constexpr double test_set_size = 34;")
print("constexpr double test_item_size = 23;")
print("constexpr double test_set[34][23] = {")
for i in range(len(ent)):
    if i % 23 == 0:
        print("  {", end="")
    elif i % 23 == 1 or i % 23 == 16:
        continue
    elif i % 23 == 22:
        print("{}}}, ".format(ent[i]), end="")
        print()
    else:
        print("{}, ".format(ent[i]), end="")
print("};")
