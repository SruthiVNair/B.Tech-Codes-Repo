section .data
userMsg db 'please enter a number:';
lenUserMsg equ $-userMsg;
opMsg db 'enter the next number:';
lenOpMsg equ $-opMsg;
dispMsg db 'The sum is :';
lenDispMsg equ $-dispMsg;

section .bss
	num resb 5
	dib resb 5
	num1 resb 5
section .text
	global _start
_start:

mov eax,4;
mov ebx,1;
mov ecx,userMsg;
mov edx,lenUserMsg;
int 80h;

mov eax,4;
mov ebx,1;
mov ecx,opMsg;
mov edx,lenOpMsg;
int 80h;


mov eax,3;
mov ebx,2;
mov ecx,num;
mov edx,5;
int 80h;

mov eax,3;
mov ebx,2;
mov ecx,dib;
mov edx,5;
int 80h;

mov eax,4;
mov ebx,1;
mov ecx,dispMsg;
mov edx,lenDispMsg;
int 80h;

mov ebx,num;
add ebx,dib;
mov num1,ebx;
mov eax,4;
mov ebx,1;
mov ecx,num1;
mov edx,5;
int 80h;

mov eax,1;
mov ebx,0;
int 80h;

