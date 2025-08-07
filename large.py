a=int(input("Enter the first  number="))
b=int(input("Enter the second  number="))
c=int(input("Enter the third  number="))

if a>b and a>c:
  print(a,"is the largest number")
elif b>c and b>a:
  print(b,"is the largest number")
else:
  print(c,"is the largest number")


if a>b and a<c or a<b and a>c:
  print(a,"is the second largest number")
elif b>a and b<c or b<a and b>c:
  print(b,"is the second largest number")
else:
  print(c,"is the second largest number")


if a<b and a<c:
  print(a,"is the smallest number")
elif b<a and b<c:
  print(b,"is the smallest number")
else:
  print(c,"is the smallest number")