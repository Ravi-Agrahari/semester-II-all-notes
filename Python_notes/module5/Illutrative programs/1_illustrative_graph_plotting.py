"""
Introduction and Explanation:
Graph plotting is essential for performance analysis as it provides a visual representation of data. Using Matplotlib, we can create various types of plots to analyze and compare performance metrics.

Key Points:
- Line plots for performance trends over time.
- Bar plots for comparing categorical performance metrics.
- Scatter plots for analyzing relationships between different metrics.

Example Program:
"""

import matplotlib.pyplot as plt
import numpy as np

# Simulated performance data
time = np.arange(1, 11)
cpu_usage = np.random.randint(20, 100, size=10)
memory_usage = np.random.randint(1, 10, size=10)

# Line plot for CPU usage over time
plt.figure(figsize=(10, 6))
plt.plot(time, cpu_usage, label='CPU Usage (%)', marker='o')
plt.title('CPU Usage Over Time')
plt.xlabel('Time (seconds)')
plt.ylabel('CPU Usage (%)')
plt.legend()
plt.grid(True)
plt.show()

# Bar plot for Memory usage comparison
plt.figure(figsize=(10, 6))
plt.bar(time, memory_usage, label='Memory Usage (GB)')
plt.title('Memory Usage Comparison')
plt.xlabel('Time (seconds)')
plt.ylabel('Memory Usage (GB)')
plt.legend()
plt.grid(True)
plt.show()

# Scatter plot for CPU vs Memory usage
plt.figure(figsize=(10, 6))
plt.scatter(cpu_usage, memory_usage, c='red', marker='x')
plt.title('CPU vs Memory Usage')
plt.xlabel('CPU Usage (%)')
plt.ylabel('Memory Usage (GB)')
plt.grid(True)
plt.show()

"""
Summary:
Graph plotting is a powerful tool for performance analysis. Using Matplotlib, we can create line plots, bar plots, and scatter plots to visualize and compare performance metrics, aiding in better decision-making and optimization.
"""

