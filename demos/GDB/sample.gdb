# 1
# breakpoint 
echo -----SETTING BREAKPOINT-----\n
b buggy.cpp:7
# run
echo -----RUNNING-----\n
r 
# list (the source code)
echo -----LISTING THE SOURCE CODE-----\n
l
# print
echo -----PRINTING-----\n
echo i: 
p i
echo size:
p size
# next (without calling function)
echo -----NEXT-----\n
n
# step (can call function)
echo -----STEP-----\n
s
echo -----STEP TWICE-----\n
s 2
# continue (till next breakpoint)
echo -----CONTINUE-----\n
c
c 2
# BUG HERE
echo -----BUG HERE-----\n
echo i: 
p i
echo size:
p size
echo my_array[i]:
p arr[i]
# backtrace
echo -----BACKTRACE-----\n
bt
c
# quit
echo -----QUIT-----\n
q