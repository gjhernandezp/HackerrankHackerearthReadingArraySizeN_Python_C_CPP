#!/usr/bin/python2.7
# Example of reading and size n and an array for Hackerrank or Hackerearth
# and adding the elements 
# G. Hernandez
  
N = int( raw_input().strip() )	
v = [ int(s) for s in raw_input().strip().split() ]	 

add = 0

for i in range(N):
    add = add + v[i]

print add
