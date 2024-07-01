"""
Introduction and Explanation:
Scatter plots are used to display values for typically two variables as points. They are useful for visualizing the relationship between variables and identifying patterns or trends.

Key Points:
- Scatter plots can be created using the scatter() function.
- They display data points as markers on a 2D plane.
- Customizations include marker style, color, and size.

Example Program:
"""

import matplotlib.pyplot as plt
import numpy as np

# Data for scatter plot
x = np.random.rand(50)
y = np.random.rand(50)

# Creating a simple scatter plot
plt.figure(figsize=(10, 6))
plt.scatter(x, y, c='blue', marker='o')
plt.title('Simple Scatter Plot')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.show()

"""
Summary:
Scatter plots are effective for visualizing the relationship between two variables. Matplotlib provides various customization options to enhance the presentation of scatter plots.
"""

