import time

x = 1

def func():
    global x
    time.sleep(5)
    print(x)
    x += 1

while 1:
    func()
