if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
       #  In for loop , first line is taking two inputs. First is the name and second is an iterable(say a list).
       #Then in second line the float function is applied to each element of iterable i.e line using map
       #In third line we are simply creating the dictionary with name as key and scores as value
    query_name = input()
    num=0.0
    for us in student_marks.keys():
        if(query_name==us):
             num=num+student_marks[us].values()

    print(float(num/3))

