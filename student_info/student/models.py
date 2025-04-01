from django.db import models

class students(models.Model):
    student_name=models.CharField(primary_key=True,max_length=50)
    reg_no=models.CharField(max_length=50)
    branch=models.CharField(max_length=50)
    year=models.CharField(max_length=50)

    def __str__(self):
        return '%s:%s:%s:%s' % (self.student_name,self.reg_no,self.branch,self.year)




