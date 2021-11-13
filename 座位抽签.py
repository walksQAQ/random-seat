import random

T = 1
fo = open('result.txt',mode="w+")
fo.seek(0,0)
while T <= 43:
    a = random.randint(1,6)
    if a != 2:
        b = random.randint(1,7)
    else:
        b = random.randint(1,8)
    d = str(a)+ " " + str(b)
    A = 1
    while A<= T:
        line = fo
        if d != line:
            print(d)
            fo.seek(0,2)
            fo.write(d)
            continue
        A = A + 1
        continue
    T = T + 1
fo.close()
