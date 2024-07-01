import matplotlib.pyplot as plt
import numpy as np

# Generation the random data
np.random.seed(0)
data = np.random.normal(0,1,100)

# Creating  a box plot
plt.boxplot(data)

# Adding labels and title 
plt.title('Box Plot of Random Data')
plt.xlabel('Data')
plt.ylabel('Values')

# Displaying the plot 
plt.show()


