// Problem Link: https://codeforces.com/contest/110/problem/A

n = input()
lst = [i for i in n]
 
count_4 = lst.count('4')
count_7 = lst.count('7')
 
if(count_4 + count_7) == 4 or (count_4 + count_7) == 7:
  print("YES")
else:
  print("NO")