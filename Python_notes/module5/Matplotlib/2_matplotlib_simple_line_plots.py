"""
Introduction and Explanation:
Line plots are one of the most common types of plots used to display data points connected by straight lines. They are particularly useful for showing trends over time.

Key Points:
- Line plots can be created using the plot() function.
- Multiple lines can be plotted on the same graph.
- Customizations include labels, titles, and legends.

Example Program:
"""

import matplotlib.pyplot as plt
import numpy as np

# Data for line plot
x = np.linspace(0, 10, 100)
y1 = np.sin(x)
y2 = np.cos(x)

# Creating a simple line plot
plt.figure(figsize=(10, 6))
plt.plot(x, y1, label='Sine')
plt.plot(x, y2, label='Cosine')
plt.title('Simple Line Plot')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.legend()
plt.show()

"""
Summary:
Simple line plots are effective for visualizing data trends over time. Matplotlib provides extensive customization options to enhance the clarity and presentation of line plots.
"""

