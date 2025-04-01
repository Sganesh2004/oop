from django.shortcuts import render
from .models import students

def studentinfo_view(request):
    stud_record =students.objects.all()
    return render(request,'studentrecord.html',{'stud':stud_record})

def student_create_view(request):
    context = {}
    if request.method == "POST":
        student_name = request.POST.get("student_name")
        reg_no = request.POST.get("reg_no")
        branch = request.POST.get("branch")
        year = request.POST.get("year")
        student_object = students.objects.create(student_name=student_name, reg_no=reg_no, branch=branch, year=year)
        context['object'] = student_object
        context['created'] = True
    return render(request, "create.html", context=context)
