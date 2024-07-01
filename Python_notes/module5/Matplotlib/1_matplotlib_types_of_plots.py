"""
Introduction and Explanation:
Matplotlib is a comprehensive library for creating static, animated, and interactive visualizations in Python. Understanding different types of plots and their use cases is crucial for effective data visualization.

Key Points:
- Line plots: Display data as a series of points connected by straight line segments.
- Bar plots: Represent categorical data with rectangular bars.
- Histograms: Show the distribution of numerical data.
- Scatter plots: Display values for typically two variables as points.

Example Program:
"""

import matplotlib.pyplot as plt
import numpy as np

# Line plot
x = np.linspace(0, 10, 100)
y = np.sin(x)

plt.figure(figsize=(10, 6))
plt.plot(x, y, label='Sine Wave')
plt.title('Line Plot')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.legend()
plt.show()

# Bar plot
categories = ['A', 'B', 'C', 'D']
values = [3, 7, 5, 9]

plt.figure(figsize=(10, 6))
plt.bar(categories, values)
plt.title('Bar Plot')
plt.xlabel('Categories')
plt.ylabel('Values')
plt.show()

# Histogram
data = np.random.randn(1000)

plt.figure(figsize=(10, 6))
plt.hist(data, bins=30, alpha=0.7)
plt.title('Histogram')
plt.xlabel('Data')
plt.ylabel('Frequency')
plt.show()

# Scatter plot
x = np.random.rand(50)
y = np.random.rand(50)

plt.figure(figsize=(10, 6))
plt.scatter(x, y)
plt.title('Scatter Plot')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.show()

"""
Summary:
Matplotlib supports various types of plots including line plots, bar plots, histograms, and scatter plots. Each plot type serves a specific purpose and is useful for different kinds of data visualization tasks.
"""

