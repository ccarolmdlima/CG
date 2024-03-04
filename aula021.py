import turtle as tr

tr.speed(7)
tr.bgcolor(149/255,189/255,252/255)

#casa
tr.color(94/255,75/255,59/255)
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

#telhado
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

#porta
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
tr.forward(10)
tr.pendown()

#janela
tr.color(94/255,75/255,59/255)
tr.begin_fill()

sides = 4
angle = 360 / 4

for x in range(sides):
    tr.forward(40)
    tr.left(angle)

tr.color(149/255,189/255,252/255)
tr.end_fill()

tr.penup()
tr.forward(20)
tr.left(90)

#linhas da janela
tr.color(94/255,75/255,59/255)
tr.pendown()
tr.forward(40)

tr.penup()
tr.left(90)
tr.forward(20)
tr.left(90)
tr.forward(20)
tr.left(90)
tr.pendown()
tr.forward(40)

tr.penup()
tr.right(90)
tr.forward(20)
tr.left(90)
tr.forward(50)
tr.pendown()

#janela
tr.color(94/255,75/255,59/255)
tr.begin_fill()

sides = 4
angle = 360 / 4

for x in range(sides):
    tr.forward(40)
    tr.left(angle)

tr.color(149/255,189/255,252/255)
tr.end_fill()

tr.penup()
tr.forward(20)
tr.left(90)

#linhas da janela
tr.color(94/255,75/255,59/255)
tr.pendown()
tr.forward(40)

tr.penup()
tr.left(90)
tr.forward(20)
tr.left(90)
tr.forward(20)
tr.left(90)
tr.pendown()
tr.forward(40)
