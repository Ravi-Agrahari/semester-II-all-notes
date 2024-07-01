"""
Introduction and Explanation:
Form design is a crucial aspect of web development, enabling user interaction and data collection. Django provides a robust form handling system that simplifies the creation, validation, and processing of forms.

Key Points:
- Django forms can be created using the forms module.
- Forms handle data validation automatically.
- Forms can be rendered using templates to create user-friendly interfaces.

Example Program:
"""

# Note: This example demonstrates a simple form design in Django.

"""
# Create a form in myapp/forms.py:
"""
from django import forms

class ContactForm(forms.Form):
    name = forms.CharField(max_length=100)
    email = forms.EmailField()
    message = forms.CharField(widget=forms.Textarea)

"""
# Create a view to handle the form in myapp/views.py:
"""
from django.shortcuts import render
from .forms import ContactForm

def contact(request):
    if request.method == 'POST':
        form = ContactForm(request.POST)
        if form.is_valid():
            # Process form data
            name = form.cleaned_data['name']
            email = form.cleaned_data['email']
            message = form.cleaned_data['message']
            # You can now use the form data (e.g., send an email)
    else:
        form = ContactForm()
    return render(request, 'contact.html', {'form': form})

"""
# Create a template for the form in myapp/templates/contact.html:
"""
<!DOCTYPE html>
<html>
<head>
    <title>Contact</title>
</head>
<body>
    <h1>Contact Us</h1>
    <form method="post">
        {% csrf_token %}
        {{ form.as_p }}
        <button type="submit">Send</button>
    </form>
</body>
</html>

"""
Summary:
Form design in Django is streamlined using the forms module, which provides tools for creating, validating, and processing forms. By rendering forms in templates, developers can create user-friendly interfaces for data collection and interaction.
"""

