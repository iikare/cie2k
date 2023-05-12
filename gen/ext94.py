ent = []
with open('gen/data94.txt') as raw_data:
    for line in raw_data:
        # print (line.strip())
        ent.append(line.strip())

print("constexpr unsigned int test94_set_size = 20;")
print("constexpr unsigned int test94_item_size = 7;")
print("constexpr double test94_set[20][7] = {")
for i in range(len(ent)):
    if i % 7 == 0:
        print("  {", end="")
    if i % 7 == 6:
        print("{}}}, ".format(ent[i]), end="")
        print()
    else:
        print("{}, ".format(ent[i]), end="")
print("};")
