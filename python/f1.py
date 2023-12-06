file=open('f1.txt','w')
try:
  file.write('hello world')
finally:
  file.close()         
