f=open("file1.txt","w")
seq=["first line\n","second line\n","third line\n"]
f.writelines(seq)
f.close()
f=open("file1.txt","r")
line=f.readlines()
print("line:",line)
f.close()
