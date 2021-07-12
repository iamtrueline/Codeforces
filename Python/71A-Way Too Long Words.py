for i in [0]*int(input()):
    w=input();
    l=len(w)-2;
    print([w,w[0]+str(l)+w[-1]][l>8])
