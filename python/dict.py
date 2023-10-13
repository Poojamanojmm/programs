dict1={'name':'pooja','age':22}
dict2={'weight':45}
print(len(dict1))
print(str(dict1))
print(type(dict1))
#dict1.clear()
print(dict1)
dict2=dict1.copy()
print(dict2)
print(dict1.keys())
print(dict1.values())
print(dict1.items())
dict1.update(dict2)
print(dict1)       


