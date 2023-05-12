import sys

process=sys.argv[1]
x=0

print("location of x in {} is {}".format(process, id(x)))

for i in range(4):
	print("{} => {}".format(process, x))
	x+=1
