from collections import namedtuple
n = int(input())

titles = input().split()

students = namedtuple('students',titles)

sum = 0

for i in range(n):

    title1, title2, title3, title4 = input().split()

    student = students(title1, title2, title3, title4)

    sum += int(student.MARKS)

print('{:.2f}'.format(sum/n))
    
