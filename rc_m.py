n = input()
if(n.isdigit()):
    #ans
    lst = []
    for i in range(int(n)):
        m = input()
        if(m.isdigit()):
            lst.append(int(m))
        else:
            print("Invalid input")
            break        
else:
    print("Invalid input")

    