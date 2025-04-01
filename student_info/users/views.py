from django.contrib.auth import authenticate, login,logout
from django.shortcuts import render, redirect

# Create your views here.
def login_view(request):
    if request.method == "POST":
        username = request.POST.get("username")
        password = request.POST.get("password")
        # remove this!!!!
        # print(username, password)
        # remove this!!
        user = authenticate(request, username=username, password=password)
        if user is None:
            context = {"error": "Invalid username or password."}
            return render(request, "login.html", context)
        login(request, user)
        return redirect('/studentrecord')
    return render(request, "login.html", {})

def logout_view(request):
    if request.method == "POST":
        logout(request)
        return redirect("/login/")
    return render(request, "logout.html", {})