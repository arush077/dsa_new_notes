f(i)--->f(i+1) on backtracking the state values dont change
c=1     c=1+1

f(i)<-----f(i+1)
c=1      c=2

but in case of pass by ref
on backtracking the state values will change

  f(i)--->f(i+1) on backtracking the state values dont change
c=1     c=1+1

f(i)<-----f(i+1)
c=2      c=2

jo function calls me change karre ho f(i+1) unko nahi karna pass by ref but jinko function calls me change nahi karre unko karna pass by ref