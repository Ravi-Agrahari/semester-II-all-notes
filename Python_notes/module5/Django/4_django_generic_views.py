"""
Introduction and Explanation:
Generic views in Django provide pre-built views for common tasks, reducing the amount of code developers need to write. They follow the DRY principle and are highly customizable.

Key Points:
- Generic views handle common patterns such as displaying lists of objects, detail views, creating, updating, and deleting objects.
- They save time and effort by providing out-of-the-box functionality.
- Generic views can be customized to suit specific needs.

Example Program:
"""

from django.urls import path
from django.views.generic import ListView, DetailView
from .models import Product

# Generic ListView and DetailView for Product model
urlpatterns = [
    path('', ListView.as_view(model=Product, template_name='product_list.html'), name='product_list'),
    path('<int:pk>/', DetailView.as_view(model=Product, template_name='product_detail.html'), name='product_detail'),
]

"""
# Template for ListView (templates/product_list.html):
"""
<!DOCTYPE html>
<html>
<head>
    <title>Product List</title>
</head>
<body>
    <h1>Products</h1>
    <ul>
        {% for product in object_list %}
        <li><a href="{% url 'product_detail' product.pk %}">{{ product.name }}</a></li>
        {% endfor %}
    </ul>
</body>
</html>

"""
# Template for DetailView (templates/product_detail.html):
"""
<!DOCTYPE html>
<html>
<head>
    <title>{{ object.name }}</title>
</head>
<body>
    <h1>{{ object.name }}</h1>
    <p>Price: ${{ object.price }}</p>
</body>
</html>

"""
Summary:
Generic views in Django streamline common tasks by providing reusable views for listing, detailing, creating, updating, and deleting objects. They enhance productivity and adhere to the DRY principle, allowing developers to focus on customization rather than boilerplate code.
"""

