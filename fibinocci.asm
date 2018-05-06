section .data
	msg db 'enter the limit:';
	lenmsg equ $-msg;
	reply db 'the fibonacci sries upto the limit you have entered is :';
	lenreply equ $-reply;

section .bss
	limit resb 5;
	fib resb 5;

setion .text
global _start
_start:

	mov eax,4
	mov ebx,1
	mov ecx,msg
	mov edx,lenmsg
	int 80h

	mov eax,3
	mov ebx,2
	mov ecx,limit
	mov edx,5
	int 80h
mov eax,4
mov ebx,1
mov ecx,reply
mov edx,lenreply
int 80h

mov al,00h;
mov [fib],al;
jmp print;


print:
	mov eax,4
	mov ebx,1
	mov ecx,fib
	mov edx,5
	int 80h;



	mov eax,1
        mov ebx,0
	int 80h;

