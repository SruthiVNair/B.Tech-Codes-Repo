section .data
msg1:db'india is my country',10;
len1:equ $-msg1;
msg2:db'reversed string is:';
len2:equ $-msg2;

section .bss
buffer resb len1;

section .text
global _start
_start:
mov eax,4;
mov ebx,1;
mov ecx,msg1;
mov edx,len1;
int 80h;


mov eax,buffer+len1-1;
mov ebx,msg1;
mov ecx,len1;



l1:mov dl,[ebx];
mov [eax],dl;
inc ebx;
dec eax;
dec ecx;
jnz l1;

mov eax,4;
mov ebx,1;
mov ecx,msg2;
mov edx,len2;
int 80h;

mov eax,4;
mov ebx,1;
mov ecx,buffer;
mov edx,len1;
int 80h;

mov eax,1;
mov ebx,0;
int 80h; 

