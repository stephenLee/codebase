#!/usr/bin/env python
# -*- coding: utf-8 -*-

# 10 Python one liners to impress your friends. code from:
# http://codeblog.dhananjaynene.com/2011/06/10-python-one-liners-to-impress-your-friends/

# 1.Multiple Each Item in a List by 2
print map(lambda x: x * 2, range(1,11))

# 2.Sum a List of Numbers
print sum(range(1,100))

# 3.Verify if Exists in a String
wordlist = ["scala", "akka", "play framework", "sbt", "typesafe"]
tweet = "This is an example tweet talking about scala and sbt."

print map(lambda x: x in tweet.split(), wordlist)

# 4.Read in a File
print open("one_liners.py").readlines()

# 5. Happy Birthday to You!

print map(lambda x: "Happy Birthday to " + ("you" if x != 2 else "dear name"), range(4)) 

# 6. Filter list of numbers
print reduce(lambda(a,b), c: (a+[c], b) if c > 60 else (a,b + [c]), [49,58,76,82,88,90],([],[]))

# 7. Fetch and Parse an XML web service
from xml.dom.minidom import parse, parseString
import urllib2
#print parse(urllib2.urlopen("http://www.google.com")).toprettyxml(encoding="utf-8")

# 8. Find minimum (or maximum) in a List
print min([14, 35, -7, 46, 98])
print max([14, 35, -7, 46, 98])

# 9. Parallel Processing
import multiprocessing
import math

print list(multiprocessing.Pool(processes=4).map(math.exp, range(1,11)))

# 10. Sieve of Eratosthenes(爱拉托逊斯筛选法)
n = 50 # We want to find prime numbers between 2 and 50
print sorted(set(range(2,n+1)).difference(set((p * f) for p in range(2, int(n**0.5) + 2) for f in range(2, (n/p)+1))))


 
