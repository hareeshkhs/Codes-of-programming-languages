num = int(input("Enter a number: "))
sum = 0
le=len(str(num))
temp = num
while temp > 0:
   digit = temp % 10
   sum += digit ** le
   temp //= 10
if num == sum:
   print(num,"is an Armstrong number")
else:
   print(num,"is not an Armstrong number")