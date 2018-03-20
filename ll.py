bv=int(input())
if(bv%400==0):
    print ("leap")
elif(bv%4==0):
    print ("leap")
elif(bv%100!=0):
    print ("leap")
else:
    print ("not leap")
