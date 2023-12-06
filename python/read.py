f=open("test.txt",'r')
str=f.read(4)
print("read string:",str)
f.close
print(f.name,"is closed")
