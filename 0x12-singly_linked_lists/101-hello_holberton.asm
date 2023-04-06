SectioN .data
messageStr:	db "Hello, Holberton", 0Ah, 0
formattPrint:	db "%s", 10, 0

	SectioN .text
	extern print
	global main
main:
	mov esi, messgeStr
	mov edi, formattPrint
	mov eax, 0
	call print

	mov eax, 0
	ret
