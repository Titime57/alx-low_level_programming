extern printf
global main
main:
mov edi, msg
mov eax, 0
call printf
mov eax,0
msg: db 'Hello, Holberton',0xa, 0
