list1=[8,6,7,4,5]
list2=[5,4,3,2,1]
if len(list1) ==len(list2):
   print("a. the list have the same length.")
else:
     print("the list have different length.")

print(f"b. sum of list1:{sum(list1)} & sum of list2:{sum(list2)}")
if sum(list1)==sum(list2):
    print("the lists sum to the same value.")
else:
        print("the list do not sum to the same value.")

common_value = set(list1) & set(list2)
if common_value:
    print(f"c. common value in both lists: {common_value}")
else:
        print("c. there are no common values in both lists.")
        
