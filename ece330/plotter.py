#To plot values, I simply used pandas and matplotlib libraries to read in csv values and plot them.  Though there do exist ways of finding peaks within these libraries, I found it to be less work to simply check each index in our values to see if it was greater than both neighbors
#ztk

import pandas as pd
import matplotlib.pyplot as plt
values = pd.read_csv("myfile.txt")
y = list(map(float, values.columns))
x = list(range(0,100))
for i in range(1,99):
    if y[i] > y[i+1] and y[i] > y[i-1]:
        print(y[i])
plt.plot(x, y)
plt.show()

    
