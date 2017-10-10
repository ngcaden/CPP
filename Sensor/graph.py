import matplotlib.pyplot as plt
import pandas as pd

dataset = pd.read_csv("reading.txt")

dataset.columns = ['time', 'total' , 'temp']

plt.figure(1)
dataset.plot('time', 'temp')
plt.ylabel('Temperature')
plt.xlabel('Time')

plt.figure(2)
dataset.plot('time', 'total')
plt.ylabel('Total')
plt.xlabel('Time')

plt.show()
