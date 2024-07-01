"""
Introduction and Explanation:
The format operator `%` and the `format()` method in Python provide ways to format strings with variables, allowing for dynamic and readable output.

Essential Points:
- `%` operator: Uses placeholders like `%s`, `%d`, `%f` for string formatting.
- `str.format()`: Uses `{}` as placeholders and allows named or positional arguments.

Summary:
String formatting in Python using the `%` operator and `format()` method enhances the readability and flexibility of outputting variable content within strings.
"""

# Example of using the format operator and the format() method

# Using the % operator for string formatting
name = "Alice"
age = 30
formatted_string = "My name is %s and I am %d years old." % (name, age)
print(formatted_string)

# Using the format() method for string formatting
formatted_string = "My name is {} and I am {} years old.".format(name, age)
print(formatted_string)

# Using named placeholders with the format() method
formatted_string = "My name is {name} and I am {age} years old.".format(name=name, age=age)
print(formatted_string)
