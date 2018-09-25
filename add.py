#!/usr/bin/python2.7
# Example of reading and size n and an array for Hackerrank or Hackerearth 
# and adding the elements 
# G. Hernandez
  
N = int( raw_input().strip() )	                        #Number of items in list(we are not using it here, it's just for following the problems instructions)
v = [ int(s) for s in raw_input().strip().split() ]	    #Taking array(list) input

add = 0

for i in range(N-1):
    add = add + v[i]

print add
