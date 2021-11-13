import random

l = "false"
while l == "false":
    a = random.randint(1,6)
    if a != 5:
        b = random.randint(1,7)
    else:
        b = random.randint(1,8)
    d = str(a)+ " " + str(b)+ " "
    c = str(d)
    fo = open( c ,"w+", encoding='utf-8')
    e = fo.read()
    f = str(e)
    if f != "yes":
        fo.write("yes")
        l = "true"