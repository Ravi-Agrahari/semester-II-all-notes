"""
Introduction and Explanation:
Error and exception handling in Python allows developers to anticipate and manage runtime errors that may occur during script execution. This ensures robustness and prevents abrupt program termination.

Essential Points:
- `try`, `except`, `finally`: Keywords used for error handling.
- `except` block catches specific exceptions or all exceptions if `except` is used alone.
- `finally` block executes cleanup code regardless of whether an exception occurred or not.

Summary:
Proper error and exception handling improves code reliability by gracefully managing errors, providing informative error messages, and ensuring proper resource cleanup.
"""

# Example of error and exception handling in Python

# Division by zero error handling
try:
    result = 10 / 0
except ZeroDivisionError:
    print("Error: Division by zero!")
finally:
    print("Cleanup code executed.")

# File handling with exception handling
try:
    with open('nonexistent_file.txt', 'r') as file:
        content = file.read()
except FileNotFoundError:
    print("Error: File not found!")
except Exception as e:
    print(f"Error: {e}")
finally:
    print("File handling completed.")
