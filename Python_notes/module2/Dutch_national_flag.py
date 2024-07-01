"""
Introduction and Explanation:
The Dutch National Flag Algorithm sorts an array containing 0s, 1s, and 2s in linear time, partitioning it into three sections.

Essential Points:
- Efficiently partitions an array using three pointers (low, mid, high).
- Sorts the array in place based on a pivot element (typically 1).

Summary:
The Dutch National Flag Algorithm demonstrates efficient array partitioning and sorting using three distinct values.
"""

# Example of Dutch National Flag Algorithm

def dutch_flag_sort(nums):
    low, mid, high = 0, 0, len(nums) - 1
    while mid <= high:
        if nums[mid] == 0:
            nums[low], nums[mid] = nums[mid], nums[low]
            low += 1
            mid += 1
        elif nums[mid] == 1:
            mid += 1
        else:
            nums[mid], nums[high] = nums[high], nums[mid]
            high -= 1
    return nums

# Example usage
arr = [2, 0, 1, 2, 1, 0]
sorted_arr = dutch_flag_sort(arr)
print("Sorted array using Dutch National Flag Algorithm:", sorted_arr)
