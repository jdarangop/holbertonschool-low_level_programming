extern printf

%define nl 10

section .data

	message db "Hello, Holberton", nl

section .text

global main
main:
	mov edi, message

	mov eax, 0
	call printf
	mov eax, 0
	ret

