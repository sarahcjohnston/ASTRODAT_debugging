#!/usr/bin/env python3


print("The aim of this code is to start with a value, run some loops to add values to it, and return the final value \n");

x = 0;

print("Update the value of x to 10 using a loop \n");
for i in range(10):
    x += 1
print("x = ", x)

print("Continue updating the value of x until x = 50 \n");
while x < 50:
    x += 1
print("x = ", x)

print("Use another loop to revert the value of x to 10 \n");
while x > 10:
    x += 1

print("Final value: x = ", x);

if x == 10:
    print("Code finished successfully! \n");
else:
    print("Wrong final value :( \n");
