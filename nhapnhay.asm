org 00h
	loop:
		mov p1,#00h
		lcall delay
		mov p1,#0ffh
		
		mov p2,#00h
		lcall delay
		lcall delay
		mov p2,#0ffh
		 
		mov p3,#00h
		lcall delay
		mov p3,#0ffh
		 
		sj
		mp loop
delay: 
		mov r0,#06h
	h1: mov r1,#0ffh
	h2: mov r2,#0ffh
	h3: djnz r2,h3
		djnz r1,h2
		djnz r0,h1
		ret 
end