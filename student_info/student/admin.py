from django.contrib import admin
from .models import students

class studentsAdmin(admin.ModelAdmin):
    list_display=['student_name','reg_no','branch','year']
    search_fields=['student_name','reg_no']
    

admin.site.register(students,studentsAdmin)
