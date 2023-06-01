extern printf
global main
main:
mov edi, msg
xor eax, eax
mov eax, 0
call printf
ret
msg db 'Hello, Holberton', 0xa, 0
