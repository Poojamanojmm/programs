list1=[2,4,-6,-8,9,7]
list2=[i for i in list1 if(i>0)];
print(f"positive list={list2}")

list1=[1,2,3,4,5,6]
list2=[i**2 for i in list1]
list2

word=input("enter a word:")
listVowel=[i for i in word if i in 'aeiouAEIOU']
print(f"vowels are (listVowels)")

w=input("enter any character: ")
ordinalVal=[ord(i) for i in w]
print(ordinalVal)
