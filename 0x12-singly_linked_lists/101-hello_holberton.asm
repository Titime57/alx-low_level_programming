extern printf
global main
main:
mov edi, format
xor eax, eax
mov eax, 0
call printf
ret
format: db 'Hello, Holberton', 0xa, 0
