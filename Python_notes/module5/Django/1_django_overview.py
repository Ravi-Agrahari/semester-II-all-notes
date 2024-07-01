
"""
Introduction and Explanation:
Django is a high-level Python web framework that encourages rapid development and clean, pragmatic design. It handles much of the complexity of web development, allowing developers to focus on writing their applications.

Key Points:
- Django follows the "batteries-included" philosophy, providing many features out-of-the-box.
- It is built on the MVC (Model-View-Controller) pattern, which it extends to the MVT (Model-View-Template) pattern.
- Django emphasizes reusability and "don't repeat yourself" (DRY) principles.

Example Program:
"""

# Note: As Django is a web framework, the example program here will be an overview of a simple Django project structure and components.

"""
# Step-by-step outline of a Django project:

1. Install Django:
   pip install django

2. Create a new project:
   django-admin startproject myproject

3. Create a new app within the project:
   cd myproject
   python manage.py startapp myapp

4. Define models in myapp/models.py:
"""
from django.db import models

class MyModel(models.Model):
    name = models.CharField(max_length=100)
    age = models.IntegerField()

"""
5. Register the model in myapp/admin.py to make it available in the admin interface:
"""
from django.contrib import admin
from .models import MyModel

admin.site.register(MyModel)

"""
6. Create a view in myapp/views.py:
"""
from django.shortcuts import render
from .models import MyModel

def home(request):
    data = MyModel.objects.all()
    return render(request, 'home.html', {'data': data})

"""
7. Define a URL pattern in myapp/urls.py:
"""
from django.urls import path
from . import views

urlpatterns = [
    path('', views.home, name='home'),
]

"""
8. Map the app URLs to the project in myproject/urls.py:
"""
from django.contrib import admin
from django.urls import include, path

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', include('myapp.urls')),
]

"""
9. Create a template in myapp/templates/home.html:
"""
<!DOCTYPE html>
<html>
<head>
    <title>Home</title>
</head>
<body>
    <h1>My Data</h1>
    <ul>
        {% for item in data %}
        <li>{{ item.name }} - {{ item.age }}</li>
        {% endfor %}
    </ul>
</body>
</html>

"""
Summary:
Django provides a robust framework for building web applications quickly and efficiently. Understanding its structure and components is crucial for leveraging its full potential.
"""

