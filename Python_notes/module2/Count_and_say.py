"""
Introduction and Explanation:
    The Count and Say sequence generates the next term based on the previous term, describing consecutive digits.

Essential Points:
    - Generates each term in the sequence by counting consecutive digits.
    - Uses recursion or iteration to produce subsequent terms.

Summary:
    The Count and Say Problem involves generating a sequence based on counting consecutive digits, demonstrating iterative sequence generation.
"""

# Example of Count and Say Problem

def count_and_say(n):
    # Base case: the first term is always "1"
    if n == 1:
        return "1"
    
    # Recursively generate the previous term in the sequence
    prev_seq = count_and_say(n - 1)
    
    # Initialize an empty list to store the result
    result = []
    
    # Initialize the count for consecutive digits
    count = 1
    
    # Iterate over the previous sequence
    for i in range(len(prev_seq)):
        # Check if the next digit is the same as the current digit
        if i + 1 < len(prev_seq) and prev_seq[i] == prev_seq[i + 1]:
            # If the same, increment the count
            count += 1
        else:
            # If different, append the count and the digit to the result
            result.append(str(count))
            result.append(prev_seq[i])
            # Reset the count for the next group of digits
            count = 1
    
    # Join the list into a single string and return it
    return ''.join(result)

# Example usage
term = 5
sequence = count_and_say(term)
print(f"The {term}th term in the Count and Say sequence is:", sequence)
