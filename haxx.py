#!/bin/python

from threading import Thread,Lock


class A():
  mutex=Lock()
  num=0
  def __init__(self,val,name):
      self.th=Thread(target=self.kaam,args=(val,name))
      self.th.start()
      self.th.join()
  def kaam(self,val,name):
      for i in range(val):
          A.mutex.acquire()
          A.num+=i
          print(f"Hello Im {name}")
          A.mutex.release()
      print(f"Sum is {A.num}")

def main():
    for i in range(4):
        A(6,f"Thread-{i}")

if __name__=="__main__":
    main()

