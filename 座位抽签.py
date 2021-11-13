import random

a = random.randint(1,6)
if a != 2:
    b = random.randint(1,7)
else:
    b = random.randint(1,8)
d = str(a)+ " " + str(b)+ " "
c = str(d)
fo = open( c ,"w+", encoding='utf-8')
fo.write("yes")
T = T + 1
