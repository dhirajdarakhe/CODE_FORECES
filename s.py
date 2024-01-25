# # Code by B3D
# # Love

# from math import *
# from collections import *
# import os
# from io import BytesIO, IOBase
# import sys
# from bisect import *
# from heapq import *
 
# MOD = 1000000007
# # sys.setrecursionlimit(10**6)


# def subinp():
#     sys.stdin = open("input.txt", "r")
#     sys.stdout = open("op1.txt", "w")

# def subinp_1():
#     sys.stdin = open("input.txt", "r")
#     sys.stdout = open("op2.txt", "w")

# def binpow(a, b, m):
#     a %= m
#     x = 1
#     while b > 0:
#         if b & 1:
#             x = x * a % m
#         a = a * a % m
#         b >>= 1
#     return x

 
 
# def binser(arr, l, r, x):
#     while l < r:
#         mid = l + (r - l) // 2
#         # print(l, r, mid)
 
#         if arr[mid] == x:
#             return mid
 
#         elif arr[mid] < x:
#             l = mid + 1
 
#         else:
#             r = mid - 1
 
#     return mid
 
# def lcm(a, b):
#     return (a * b) // gcd(a, b)
 
# def sod(n):
#     l = list(str(n))
#     s = 0
#     for i in l:
#         s += int(i)
#     return s
 
 
# def prime_factors(num):   
#     l =[]
#     if num % 2:
#         l.append(2)
#     while num % 2 == 0:  
#         num = num / 2  
  
#     for i in range(3, int(sqrt(num)) + 1, 2):  
#         if not num % i:
#             l.append(i)
#         while num % i == 0:  
#             num = num / i
#     if num > 2:
#         l.append(num)
#     return l
 
 
# def factmod(n, p):
 
#     f = defaultdict(int)
#     f[0] = 1
#     for i in range(1, n + 1):
#         f[i] = (f[i-1] * i) % MOD
 
#     """
#     res = 1
#     while (n > 1):
#         if (n//p) % 2:
#             res = p - res
 
#         res = res * f[n%p] % p
#         n //= p
#     """
 
#     return f
 
 
 
# def largestPower(n, p):
     
#     # Initialize result
#     x = 0
     
#     # Calculate x = n/p + n/(p^2) + n/(p^3) + ....
#     while (n):
#         n //= p
#         x += n
#     return x
 
# def modFact(n, p):
#     if n >= p:
#         return 0   
 
#     result = 1
#     for i in range(1, n + 1):
#         result = (result * i) % p
 
#     return result
 
# def drec(x, y):
#     if y == x + 1:
#         return 'R'
#     if y == x - 1:
#         return 'L'
#     if x < y:
#         return 'D'
#     return 'U'
 
# def cellhash(x, y):
#     return (x - 1) * m + y
 
 
# def bins(l, x, n):
#     i = bisect_left(l, x)
#     if i < n:
#         return i
#     if i:
#         return (i-1)
#     else:
#         return n

# def cond(l):
#     for i in range(len(l) - 1):
#         if l[i] == str(int(l[i + 1]) - 1):
#             return False
#     return True

# def isvowel(s):
#     if s in list("aeiou"):
#         return 1
#     return 0

# def countOdd(L, R):
 
#     N = (R - L) // 2
 
#     # if either R or L is odd
#     if (R % 2 != 0 or L % 2 != 0):
#         N += 1
 
#     return N

# def tst(A, B, C):
#     return ((A|B) & (B|C) & (C|A))

# def palcheck(n, s):
#     i, j = 0, n - 1
#     while i <= j:
#         if s[i] == s[j]:
#             return False
#         i += 1
#         j -= 1
#     return True

# def sakurajima(n):
#     if n < 9:
#         n = 10
#     l = [0]

#     for i in range(1, n + 1):
#         if i % 2:
#             l.append(i)
#         else:
#             l.append(2)

#     for i in range(3, int(n ** 0.5) + 1, 2):
#         if l[i] == i:
#             for j in range(i * i, n + 1, i):
#                 if l[j] == j:
#                     l[j] = i
#     return l




# def getfact(x):
#     ret = []
#     d = defaultdict(int)
#     while x != 1:
#         ret.append(spf[x] ** (d[spf[x]] + 1))
#         d[spf[x]] += 1
#         x = x // spf[x]
 
#     return ret

# def prchck(n):
#     if n == 1:
#         return False
#     for i in range(2, int(sqrt(n)) + 1):
#         if not n % i:
#             return False
#     return True

# def ispal(s, n):
#     for i in range(n // 2):
#         if s[i] != s[n - i - 1]:
#             return False
#     return True


# def bfs(src, dest, ajl, vis):
#     q = deque([src])
#     vis[src] = True
 
#     while q:
#         i = q.popleft()
#         if i == dest:
#             return True
#         for j in ajl[i]:
#             if not vis[j]:
#                 vis[j] = True
#                 q.append(j)
#     return False


# def sieve(n):
#     if n < 9:
#         n = 10
#     l = [1] * (n + 1)
#     for i in range(2, int(n ** 0.5) + 1):
#         if l[i]:
#             for j in range(i ** 2, n + 1, i):
#                 if j % i == 0:
#                     l[j] = 0
#     l[1] = 0
#     return l

# class DisjSet:
#     def __init__(self, n):
#         self.size = [1] * n
#         self.parent = [i for i in range(n)]
  
 
#     def find(self, x):
#         if (self.parent[x] != x):
#             self.parent[x] = self.find(self.parent[x])
  
#         return self.parent[x]
  
 
#     def union(self, x, y):
 
#         xset = self.find(x)
#         yset = self.find(y)
  
#         if xset == yset:
#             return
  
#         if self.size[xset] < self.size[yset]:
#             self.parent[xset] = yset
#             self.size[yset] += self.size[xset]
  
#         else:
#             self.parent[yset] = xset
#             self.size[xset] += self.size[yset]

# def dfs(i, ajl, vis, l, x):
#     vis[i] = True
#     l[i] = x

#     for j in ajl[i]:
#         if not vis[j]:
#             dfs(j, ajl, vis, l, x)

# # spf = sakurajima(10 ** 5 + 1)
# def checkpo3(N):
#     while N > 0:

#         if N % 3 == 2:
#             return False
#         N //= 3

#     return True

# def sumofdig(n):
#     ans = 0
#     s = str(n)
#     for i in s:
#         ans += int(i)
#     return ans 

# def convert(set):
#     return [*set, ]

# """
# pow2 = [1]
# # print(log2(10 ** 9))
# for i in range(29):
#     pow2.append(pow2[-1] * 2)
# """

 
# inp    = lambda:int(input())
# strin  = lambda: input().strip()
# strl   = lambda: list(input().strip())
# strlst = lambda: list(map(str, input().split()))
# mult   = lambda: map(int,input().strip().split())
# mulf   = lambda: map(float,input().strip().split())
# lstin  = lambda: list(map(int,input().strip().split()))
 
# flush  = lambda: stdout.flush()
# stdpr  = lambda x: stdout.write(str(x))



# def panda(i, j):
#     if i >= n or j >= m:
#         return 0

#     c1, c2, c3 = 0, 0, 0

#     if la[i] == lb[j]:
#         c1 = 1 + panda(i + 1, j + 1)

#     c2 = panda(i, j + 1)
#     c3 = panda(i + 1, j)

#     return max(c1, c2, c3)

    
# # Power comes in response to a need, not a desire.
# # n = int(input())
# # n, k = map(int, input().split())
# # s = input()
# # l = list(map(int, input().split()))
# # memo = [[-1 for i in range(n + 1)] for j in range(2)]

# input = lambda: sys.stdin.readline().rstrip("\r\n")

# def leftRotate(x, d):
#     return (x << d) | (x >> (sz - d))

# def rightRotate(x, d):
#     return (x >> d) | (x << (sz - d)) & 0xDDDDDF

# n, x = mult()
# bn = bin(n)[2:]
# sz = len(bn)

# if prchck(n):
#     ans = leftRotate(n, x % sz)
# else:
#     ans = rightRotate(n, x % sz)
# bna = bin(ans)[2:]
# bna = bna[len(bna) - sz:]

# ans1 = 0
# # print(bna)
# for i in range(sz):
#     if bna[i] == '1':
#         ans1 += 2 ** (sz - i - 1)

# print(ans1)

#     # sys.stdout.write(str(ans))
#     # print("Case #" + str(_ + 1) + ": " + str(ans))




n = input()
if(n.isdigit()):
  f = False
  v = []
  for i in range(int(n)):
    m = input()
    if(m.isdigit()):
      v.append(m)
    else:
      print("Invalid Input ")
      f = True
      break
  if(f==False):
    v = sorted(set(v))
    j = 0
    flag = False
    for i in range(len(v)):
      j = i
      if(j!=v[j]):
        flag = True
        break
    if(flag==True):
      print(j)
    else:
      print(j+1)
else:
  print("Invalid Input")