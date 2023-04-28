section .data
	output db 'Hello, Holberton', 10, 0

section .text
	global main
	extern printf

main:
	mov     edi, output
	xor     eax, eax
	call    printf
	mov     eax, 0
	ret

