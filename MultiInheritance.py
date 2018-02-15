class SuperParent:
	def m1(self):
		print("In m1 of SuperParent")
		
class Parent:
	def m1(self):
	    print("In m1 of Parent")

class Child(SuperParent,Parent):
	pass
	    
	
	
c=Child()
c.m1()	
