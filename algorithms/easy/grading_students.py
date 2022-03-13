def gradingStudents(grades):
    new_grades=[]
    for i in range(0,len(grades)):
        if grades[i]<38:
            new_grades.append(grades[i])
        else:
            rem=grades[i]%5
            new=grades[i]-rem+5
            if (new-grades[i])<3:
                new_grades.append(new)
            else:
                new_grades.append(grades[i])
    return new_grades