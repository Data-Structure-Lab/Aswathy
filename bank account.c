class bank:
    def __init__(self,acnt,nam,typ,amt):
        self.ac=acnt
        self.name=nam
        self.type=typ
        self.amount=amt
    def printamt(self):
        print("acc name:",self.name)
        print("acc no:",self.ac)
        print("acc type:",self.type)
        print("amount:",self.amount)
    def withdraw(self,w1):
        return(self.amount-w1)
n=input("enter your name:")
t=input("enter the acc type:")
a=int(input("enter the acc no:"))
am=int(input("enter the amount:"))
obj=bank(a,n,t,am)
print("account details")
obj.printamt()
w=int(input("enter amount to withdraw:"))
print("balance=",obj.withdraw(w))
