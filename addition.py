from tkinter import *
from tkinter import messagebox  
root = Tk(className='Addition')
# set window size
root.geometry("500x500")

int1=IntVar()
int2=IntVar()

def addition():
    no1 = int1.get()
    no2 = int2.get()
    add = no1 + no2
    mylable = Label(root, text=add).grid(row=10,column=3)
    messagebox.showinfo("information","Addition Done success fully")

def subtract():
    no1 = int1.get()
    no2 = int2.get()
    add = no1 - no2
    mylable = Label(root, text=add).grid(row=10,column=3)
    messagebox.showinfo("information","Subtraction Done success fully")  

def multiply():
    no1 = int1.get()
    no2 = int2.get()
    add = no1 * no2
    mylable = Label(root, text=add).grid(row=10,column=3)
    messagebox.showinfo("information","Multiplication Done success fully") 

def divide():
    no1 = int1.get()
    no2 = int2.get()
    add = no1 / no2
    mylable = Label(root, text=add).grid(row=10,column=3)
    messagebox.showinfo("information","Divion Done success fully")  

lable1 = Label(root, text="Enter No. 1").grid(row=4, column=3)
inpout1 = Entry(root, width=50, bd=4, justify="center",textvariable=int1).grid(row=5, column=3)
lable2 = Label(root, text="Enter No. 2").grid(row=6, column=3)
inpout2 = Entry(root, width=50, bd=4, justify="center",textvariable=int2).grid(row=7, column=3)
butoon = Button(root, text="Add", command=addition).grid(row=8,column=1)
butoonsub = Button(root, text="Sub", command=subtract).grid(row=8,column=2)
butoonmult = Button(root, text="Multi", command=multiply).grid(row=8,column=3)
butoondivide = Button(root, text="divide", command=divide).grid(row=8,column=4)

root.mainloop() 