class calculator:
  def __init__(self, amt):
    self.amt = amt


  def calculate(self, amt, value):
    numberOfNotes = int(amt/value)
    self.notes = numberOfNotes
    self.amt = amt-(value*numberOfNotes)


money = input("how much? ")
x = calculator(money)

notes = [500,100,50,20,10,5,2,1]
for i in range (len(notes)):
  x.calculate(int(money), notes[i])
  print(str(notes[i]) + ": " + str(x.notes))
  money = x.amt