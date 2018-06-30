This ardunio sketch is an implemetation for function that control led on pressing on a switch connected triggering an interrupt   
instructions :
            1 version 1.0
			1 - call ledControl with three arguments
					1) led pin 
					2) switch pin 
					3)ISR function name
											
	   2 version 2.0
			1 - for each led switch pair create ISRR instance 
			2 - the constructor take three arguments 
					1) led pin 
					2) switch pin 
					3)ISR function name
	   3 - after defining new instance of ISRR you can call ISRR.ledControl() any time you want to define led switch pair

what I have learned :
             1 - while i'm trying to encapsulate the whole code in one function i found that the arduino specified compiler
			 doesn't allow nested function unlike standard GCC compiler that allow this with a specific extension 

