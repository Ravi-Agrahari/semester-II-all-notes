"""
Introduction and Explanation:
Financial Application: Determine eligibility for a loan based on income.

Essential Points:
- Uses conditional statements (`if`, `elif`, `else`) to evaluate income eligibility.
- Demonstrates decision-making based on financial criteria.

Summary:
This program illustrates the use of conditional statements in a financial context to determine loan eligibility based on income.
"""

# Example of Financial Application
income = 50000
loan_amount = 20000

if income > 30000:
    print("Eligible for loan")
elif income > 20000:
    print("Consideration for loan")
else:
    print("Not eligible for loan")
