class Parent:
	def m1(self):
		print("In m1 of parent")
		
class child(Parent):
	def m1(self):
	    print("In m1 of child")
	    
	
	
p=child()
p.m1()	
