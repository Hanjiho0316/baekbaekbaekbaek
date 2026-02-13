a = int(input())
b = []
head = 0
for i in range(1,a+1):
    b.append(i)
while len(b) - head > 1:
    head += 1
    b.append(b[head])
    head += 1
print(b[head])