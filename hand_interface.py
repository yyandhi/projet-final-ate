from tkinter import *
from tkinter.ttk import *
import serial

commPort = 'COM4'
ser = serial.Serial(commPort, baudrate = 9600, timeout = 1)

def arm_flex():
    ser.write(b'o')

def arm_unflex():
    ser.write(b'x')


root = Tk()
root.geometry('100x100')
btn1 = Button(root, text = 'Flex',
                command = arm_flex)
btn1.pack(side = 'top')
btn2 = Button(root, text = 'Unflex',
                command = arm_unflex)

btn1.pack(side = 'top')
root.mainloop()
