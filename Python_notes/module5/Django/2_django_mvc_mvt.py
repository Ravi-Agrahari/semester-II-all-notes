"""
Introduction and Explanation:
Django follows the Model-View-Template (MVT) architecture, a variant of the Model-View-Controller (MVC) pattern. This architecture helps in organizing the code logically and separating concerns.

Key Points:
- MVC separates the application into three interconnected components: Model, View, and Controller.
- MVT in Django consists of:
  - Model: Defines the data structure.
  - View: Handles the business logic and interacts with models.
  - Template: Renders the user interface using data from views.

Example Program:
"""

# Note: This example outlines the components of the MVT architecture in a Django project.

"""
# 1. Model (myapp/models.py):
"""
from django.db import models

class Product(models.Model):
    name = models.CharField(max_length=100)
    price = models.DecimalField(max_digits=10, decimal_places=2)

"""
# 2. View (myapp/views.py):
"""
from django.shortcuts import render
from .models import Product

def product_list(request):
    products = Product.objects.all()
    return render(request, 'product_list.html', {'products': products})

"""
# 3. Template (myapp/templates/product_list.html):
"""
<!DOCTYPE html>
<html>
<head>
    <title>Product List</title>
</head>
<body>
    <h1>Products</h1>
    <ul>
        {% for product in products %}
        <li>{{ product.name }} - ${{ product.price }}</li>
        {% endfor %}
    </ul>
</body>
</html>

"""
Summary:
Django's MVT architecture facilitates a clean separation of concerns, making it easier to manage and scale web applications. Models handle data, views process requests, and templates render the user interface.
"""

