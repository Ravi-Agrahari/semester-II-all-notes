"""
Introduction and Explanation:
Conditional Statements in Python:
- `if` statement: Executes code if a condition is true.
- `elif` statement: Allows checking multiple conditions after the first `if`.
- `else` statement: Executes if none of the preceding conditions are true.

Summary:
Conditional statements in Python control the flow of execution based on conditions, enabling decision-making in programs.
"""

# Example of Conditional Statements
# Financial application: Determine eligibility for a loan based on income

income = 50000
loan_amount = 20000

if income > 30000:
    print("Eligible for loan")
elif income > 20000:
    print("Consideration for loan")
else:
    print("Not eligible for loan")

