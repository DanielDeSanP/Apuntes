#! /usr/bin/python
# -*- coding:utf-8 -*-
import threading

#Apunte de hilos o Threads

class myHilo(threading.Thread):
	def __init__(self,num):
		threading.Thread.__init__(self)
		self.num = num
	def run(self):
		print "Soy el hilo ",self.num

hilo1 = myHilo(1)
hilo2 = myHilo(2)

hilo1.run()
hilo2.run()