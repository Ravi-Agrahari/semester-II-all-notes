import matplotlib.pyplot as plt
import numpy as np

# Generation the random data
np.random.seed(0)
x = np.random.normal(0,1,100)
y = np.random.normal(0,1,100)


# Creating  a box plot
plt.scatter(x,y)

# Adding labels and title 
plt.title(' of Random Data')
plt.xlabel('Data')
plt.ylabel('Values')

# Displaying the plot 
plt.show()


