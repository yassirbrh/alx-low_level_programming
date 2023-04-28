section .data
	output db 'Hello, Holberton', 10

_start:
	mov eax, 4 ; write syscall
	mov ebx, 1 ; stdout file descriptor
	mov ecx, output ; get the address of output
	mov edx, 17 ; the length of output
	int 0x80 ; system call

	; exit with status code 0
	mov eax, 1 ; exit syscall
	mov ebx, 0 ; status code 0
	int 0x80 ; system call

global main
main:
	jmp _start
