section .data
msg1: db 'Enter the number';
lenmsg1: equ $-msg1;
msg2:db 'smallest number is';
lenmsg2:equ $-msg2;

section .bss
num1 resb 2;
num2 resb 2;

section .text
global _start
_start:

mov esi,num1;
mov edi,5;
next: mov eax,4;
mov ebx,1;
mov ecx,msg1;
mov edx,lenmsg1;
int 80h;

mov eax,3;
mov ebx,1;
mov ecx,esi;
mov edx,5;
int 80h;

add esi,5;
dec edi;
jnz next;
 mov esi,num1;
mov edi,5;
add: mov eax,[esi];
jmp check;
next1: add esi,5;
mov ebx,[esi];
cmp ebx,eax;
jl add;
check: dec edi;
jnz next1;
mov [num2],eax;
mov eax,4;
mov ebx,1;
mov ecx,msg2;
mov edx,lenmsg2;
int 80h;
mov eax,4;
mov ebx,1;
mov ecx,num2;
mov edx,1;
int 80h;
mov eax,1;
mov ebx,0;
int 80h;



