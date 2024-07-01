"""
Introduction and Explanation:
Boxplots are used to display the distribution of data based on a five-number summary: minimum, first quartile, median, third quartile, and maximum. They are useful for identifying outliers and understanding the spread of data.

Key Points:
- Boxplots can be created using the boxplot() function.
- They highlight the central tendency and variability of data.
- Boxplots can be customized with labels, titles, and gridlines.

Example Program:
"""

import matplotlib.pyplot as plt
import numpy as np

# Data for boxplot
data = np.random.randn(100)

# Creating a boxplot
plt.figure(figsize=(10, 6))
plt.boxplot(data, vert=False)
plt.title('Boxplot')
plt.xlabel('Data')
plt.show()

"""
Summary:
Boxplots provide a visual summary of data distribution, highlighting central tendency, variability, and potential outliers. Matplotlib's boxplot() function makes it easy to create and customize boxplots.
"""

