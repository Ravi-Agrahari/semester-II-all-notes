"""
Introduction and Explanation:
    Working with dates and times in Python involves using the `datetime` module, which provides classes for manipulating dates and times. This module allows for date arithmetic, formatting, and timezone handling.

Essential Points:
    - `datetime.datetime`: Class representing a date and time.
    - `datetime.date`: Class representing a date without time information.
    - `datetime.time`: Class representing time without date information.
    - `datetime.timedelta`: Class representing a duration or difference between two dates or times.

Summary:
    The `datetime` module provides powerful tools for handling dates and times, making it easier to perform calculations and manipulate date-related data in Python scripts.
"""

import datetime

# Example of using the datetime module in Python

# Getting the current date and time
current_datetime = datetime.datetime.now()
print("Current date and time:", current_datetime)

# Formatting a date
formatted_date = current_datetime.strftime("%Y-%m-%d %H:%M:%S")
print("Formatted date:", formatted_date)

# Calculating future date using timedelta
future_date = current_datetime + datetime.timedelta(days=7)
print("Future date (7 days later):", future_date.date())
