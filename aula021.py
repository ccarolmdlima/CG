import turtle as tr

tr.color(176/255,147/255,130/255)
tr.pensize(5)
tr.begin_fill()

sides = 4
angle = 360 / 4

for x in range(sides):
    tr.forward(150)
    tr.left(angle)

tr.color(242/255,204/255,182/255)
tr.end_fill()

tr.penup()
tr.left(90)
tr.forward(150)
tr.right(90)
tr.pendown()

tr.color(153/255,14/255,14/255)
tr.begin_fill()

sides = 3
angle = 360 / 3

for x in range(sides):
    tr.forward(150)
    tr.left(angle)

tr.color(237/255,36/255,36/255)
tr.end_fill()

tr.penup()
tr.right(90)
tr.forward(150)
tr.left(90)
tr.forward(55)
tr.pendown()

tr.color(94/255,75/255,59/255)
tr.begin_fill()

sides = 4
angle = 360 / 4

for x in range(sides):
    tr.forward(40)
    tr.left(angle)

tr.end_fill()

tr.penup()
tr.left(180)
tr.forward(55)
tr.right(90)
tr.forward(75)
tr.right(90)
