section .data
usermsg1 db 'please enter first number';
lenusermsg1 equ $-usermsg1;
dispmsg1 db 'you have entered';
lendispmsg1 equ $-dispmsg1;
usermsg2 db 'please enter second number';
lenusermsg2 equ $-usermsg2;
dispmsg2 db 'you have entered';
lendispmsg2 equ $-dispmsg2;
sumsg db 'SUM ';
lensumsg equ $-sumsg;



section .bss
num1 resb 2;
num2 resb 2;
sum resb 1;


section .text
global _start
_start:
mov eax,4;
mov ebx,1;
mov ecx,usermsg1;
mov edx,lenusermsg1;
int 80h;

mov eax,3;
mov ebx,2;
mov ecx,num1;
mov edx,2;
int 80h;

mov eax,4;
mov ebx,1;
mov ecx,dispmsg1;
mov edx,lendispmsg1;
int 80h;

mov eax,4;
mov ebx,1;
mov ecx,num1;
mov edx,2;
int 80h;


mov eax,4;
mov ebx,1;
mov ecx,usermsg2;
mov edx,lenusermsg2;
int 80h;

mov eax,3;
mov ebx,2;
mov ecx,num2;
mov edx,2;
int 80h;

mov eax,4;
mov ebx,1;
mov ecx,dispmsg2;
mov edx,lendispmsg2;
int 80h;

mov eax,4;
mov ebx,1;
mov ecx,num2;
mov edx,2;
int 80h;

mov eax,[num1];
sub eax,'0';
mov ebx,[num2];
sub ebx,'0';
add eax,ebx;
add eax,'0';
mov [sum],eax;
int 80h;



mov eax,4;
mov ebx,1;
mov ecx,sumsg;
mov edx,lensumsg;
int 80h;

mov eax,4;
mov ebx,1;
mov ecx,sum;
mov edx,1;
int 80h;


mov eax,1;
mov ebx,0;
int 80h;








