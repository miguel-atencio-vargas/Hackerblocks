import math

n = int(input())
n = math.factorial(n)
c = 0
while(n % 10 == 0):
    n = n//10
    c +=1
print(c)
