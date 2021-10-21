import tkinter as tk
root = tk.Tk()

def addition():
    mylable = tk.Label(root, text="heloo")
    mylable.pack()

mybutton = tk.Button(root, text="Click Me", command=addition)
mybutton.pack()
# Code to add widgets will qgo here...
root.mainloop()