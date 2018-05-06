section .data
  userMsg1: db'enter the first number  '
  lenuserMsg1: equ $-userMsg1
  userMsg2: db'enter second number  '
  lenuserMsg2: equ $-userMsg2
  userMsg3: db'enter the third number  '
  lenuserMsg3: equ $-userMsg3
  dispMsg: db'the sorted list is  '
  lenDispMsg: equ $-dispMsg

section .bss
  num1 resb 5
  num2 resb 5
  num3 resb 5
  num4 resb 5
  num5 resb 5
  num6 resb 5

section .data
global _start
_start:
	mov eax,4
	mov ebx,1
	mov ecx,userMsg1
	mov edx,lenuserMsg1
	int 80h

	mov eax,3
	mov ebx,2
	mov ecx,num1
	mov edx,5
	int 80h 

mov eax,4
	mov ebx,1
	mov ecx,userMsg2
	mov edx,lenuserMsg2
	int 80h

	mov eax,3
	mov ebx,2
	mov ecx,num2
	mov edx,5
	int 80h 

mov eax,4
	mov ebx,1
	mov ecx,userMsg3
	mov edx,lenuserMsg3
	int 80h

	mov eax,3
	mov ebx,2
	mov ecx,num3
	mov edx,5
	int 80h  

	mov al,[num1]
	sub al,'0'
	mov bl,[num2]
	sub bl,'0'
	mov dl,[num3]
	sub dl,'0'

	cmp al,bl
	jc l1
	
	mov [num5],al
	mov al,bl
	jmp ls1


l1:
	mov [num5],bl

ls1:
	cmp al,dl
	jc l2
	mov [num6],al
	mov al,dl
	jmp ls2

l2:
	mov [num6],dl
	
ls2:add al,'0'
mov [num4],al
mov al,[num5]
cmp al,[num6]
jc lp
mov bl,[num6]
mov [num5],bl
mov [num6],al

	lp:mov eax,4
	mov ebx,1
	mov ecx,dispMsg
	mov edx,lenDispMsg
	int 80h

	mov al,'0'
	add [num5],al
	add [num6],al
	
	mov eax,4
	mov ebx,1 
	mov ecx,num6
	mov edx,5
	int 80h 

	mov eax,4
	mov ebx,1
	mov ecx,num5
	mov edx,5
	int 80h 

	mov eax,4
	mov ebx,1
	mov ecx,num4
	mov edx,5
	int 80h 
	
	mov eax,1
	mov ebx,0
	int 80h

