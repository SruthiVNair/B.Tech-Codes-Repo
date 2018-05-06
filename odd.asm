section .data
userMsg db ' Enter a number'
lenuserMsg equ $ - userMsg 
even_msg db 'Even Number'
len1 equ $ - even_msg
odd_msg db 'Odd Number'
len2 equ $ - odd_msg

section .bss
num resb 5;

section .text
global _start;
_start:
mov ebx, 1;
mov ecx, userMsg;
mov edx,lenuserMsg;
mov eax, 4;
int 80h;
 mov ebx, 0 ;
 mov ecx, num
mov edx, 5 ;
mov eax, 3;
int 80h;
mov ax, [num]
and ax, 1
 jz even  ;
mov ebx, 1;
mov ecx, odd_msg ;
mov edx, len2;
mov eax, 4;
int 80h;
 jmp outprog;
even:
mov ebx, 1;
mov ecx, even_msg;
mov edx, len1;
 mov eax, 4;
 int 80h;
outprog:
mov eax, 1;
int 80h;
