ent = []
with open('gen/data.txt') as raw_data:
    for line in raw_data:
        # print (line.strip())
        ent.append(line.strip())

# print(ent)


print("#pragma once")
print("#include <vector>")

print("std::vector<std::vector<double>> test_value = {")
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
