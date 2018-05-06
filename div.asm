section .data
usermsg1 db 'please enter first number';
lenusermsg1 equ $-usermsg1;

usermsg2 db 'please enter second number';
lenusermsg2 equ $-usermsg2;

divmsg db 'quotient is  ';
lendivmsg equ $-divmsg;

divmsg1 db 'reminder is  ';
lendivmsg1 equ $-divmsg1;


section .bss
num1 resb 2;
num2 resb 2;
qtnt resb 1;
rdr resb 1;


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
mov ecx,usermsg2;
mov edx,lenusermsg2;
int 80h;
mov eax,3;
mov ebx,2;
mov ecx,num2;
mov edx,2;
int 80h;


mov al,[num1];
sub al,'0';
mov bl,[num2];
sub bl,'0';
div bl;
add al,'0';
add ah,'0';
mov [qtnt],al;
mov [rdr],ah;
int 80h;



mov eax,4;
mov ebx,1;
mov ecx,divmsg ;
mov edx,lendivmsg ;
int 80h;
mov eax,4;
mov ebx,1;
mov ecx,qtnt;
mov edx,1;
int 80h;


mov eax,4;
mov ebx,1;
mov ecx,divmsg1 ;
mov edx,lendivmsg1 ;
int 80h;
mov eax,4;
mov ebx,1;
mov ecx,rdr;
mov edx,1;
int 80h;


mov eax,1;
mov ebx,0;
int 80h;

