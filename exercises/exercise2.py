#!/usr/bin/env python3

import numpy as np

print("This is a pseudo force solver. It takes in an array of masses of the particle and an array of the particle accelerations.");

mass = np.empty(50)
acc = np.empty(50)
force = np.empty(10)

for i in range(50):
    mass[i] = 10;
    acc[i] = 10;
    force[i] = mass[i]*acc[i];
    if force[i] == 100:
        print("Item {} initialised correctly".format(i));
    else:
        printf("ERROR \n");
