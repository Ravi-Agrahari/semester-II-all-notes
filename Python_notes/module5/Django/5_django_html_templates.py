"""
Introduction and Explanation:
HTML templates in Django are used to render dynamic content. They are written using Django Template Language (DTL), which allows embedding of Python-like expressions within HTML.

Key Points:
- Templates contain placeholders for dynamic content.
- DTL provides tags, filters, and variables to control the rendering of the template.
- Templates promote separation of concerns by keeping presentation separate from business logic.

Example Program:
"""

# Note: This example demonstrates the usage of HTML templates in Django.

"""
# Sample view in myapp/views.py:
"""
from django.shortcuts import render

def home(request):
    context = {'name': 'Alice', 'age': 30}
    return render(request, 'home.html', context)

"""
# Sample template in myapp/templates/home.html:
"""
<!DOCTYPE html>
<html>
<head>
    <title>Home</title>
</head>
<body>
    <h1>Welcome, {{ name }}</h1>
    <p>You are {{ age }} years old.</p>
</body>
</html>

"""
# Template tags and filters:
"""
<!DOCTYPE html>
<html>
<head>
    <title>Template Tags and Filters</title>
</head>
<body>
    <h1>Tags</h1>
    {% if age >= 18 %}
        <p>Adult</p>
    {% else %}
        <p>Minor</p>
    {% endif %}

    <h1>Filters</h1>
    <p>Uppercase: {{ name|upper }}</p>
    <p>Length: {{ name|length }}</p>
</body>
</html>

"""
Summary:
HTML templates in Django allow for the creation of dynamic web pages. Using Django Template Language, developers can embed logic within HTML to render dynamic content, promoting a clean separation between presentation and business logic.
"""

