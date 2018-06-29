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
			 
				
this code has two versions 
       1 - version 1.0 without classes
	   2 - version 2.0 with classes




assumptions : 
			1 - switch is connected as pullup so when pressed the input value is zero[LOW]
			2 - led connected as active high so to lighting it the output pin made high
			
this code is tested on ardunio uno and worked well