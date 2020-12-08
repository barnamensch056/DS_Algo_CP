
s = input()
for i in range(len(s)):
    command=list(input().split())
    if command[0]=='isalnum':
        print(s.isalnum())
    elif command[0]=='isalpha':
        print(s.isalpha())
    elif command[0]=='isdigit':
        print(s.isdigit())
    elif command[0]=='islower':
        print(s.islower())
    else:
        print(s.isupper())
