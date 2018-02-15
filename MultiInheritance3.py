class SuperParent:
	def m1(self):
		print("In m1 of SuperParent")
		
class Parent:
	def m1(self):
	    print("In m1 of Parent")

class Child(Parent,SuperParent):
	pass
	    
	
	
c=Child()
c.m1()	
