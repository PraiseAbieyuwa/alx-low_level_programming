SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, marks
	mov edi, formatting
	mov eax, 0
	call printf

	mov eax, 0
	ret
