"""
Plot functions
"""
import matplotlib.pyplot as plt
import numpy as np
import gpython.core


# variables
lim = 10

fig = plt.figure()
# ax = fig.add_subplot(1, 1, 1)
# ax.spines['left'].set_position('center')
# ax.spines['bottom'].set_position('center')
# ax.spines['right'].set_color('none')
# ax.spines['top'].set_color('none')
# ax.xaxis.set_ticks_position('bottom')
# ax.yaxis.set_ticks_position('left')

plt.xlabel("x")
plt.ylabel("y")

# actual plotting; we need np.linspace() for x. y=mx+c
x = np.linspace(1000, -100, 100)
y = 2*x + 1

plt.plot(x, y, '-r', )
plt.grid()
plt.show()