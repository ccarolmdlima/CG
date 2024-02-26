import turtle as tr

tr.shape("turtle")
tr.pensize(5)
tr.color("pink")
tr.bgcolor("purple")
tr.speed(100)

sides = 360
angle = 360 / 360

for x in range(sides):
    tr.forward(1)
    tr.left(angle)

