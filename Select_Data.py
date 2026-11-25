import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    # if(students.student_id==101):
    #     return student.name,student.age
    # row=students.query("students.id==101")[['name','age']]
    # return row
    row = students.query("student_id == 101")[['name','age']]
    return row
