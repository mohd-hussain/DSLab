class Demo:
	
	def m1(self,no1=None,no2=None):
		
		if(no1==None and no2==None):
			print("No Parameter")
			
		elif(no1==None or no2==None):
		    print("ONE Parameter")
		    
		else:
		    print("TWO Parameter")
		    
		    
d=Demo()
d.m1()
d.m1(5)
d.m1(6,7)		        	
	
