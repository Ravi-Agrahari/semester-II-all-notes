"""
Introduction and Explanation:
Kadane's Algorithm finds the maximum sum of a contiguous subarray in a one-dimensional numeric array.

Essential Points:
- Efficiently computes the maximum sum using dynamic programming.
- Tracks current and maximum subarray sums as it traverses the array.

Summary:
Kadane's Algorithm illustrates efficient subarray sum computation using dynamic programming principles.
"""

# Example of Kadane's Algorithm

def kadane_algorithm(nums):
    max_sum = nums[0]
    current_sum = nums[0]
    for num in nums[1:]:
        current_sum = max(num, current_sum + num)
        max_sum = max(max_sum, current_sum)
    return max_sum

# Example usage
array = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
max_subarray_sum = kadane_algorithm(array)
print("Maximum sum of contiguous subarray using Kadane's Algorithm:", max_subarray_sum)
