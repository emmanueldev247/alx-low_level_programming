section .data
	hello db 'Hello, Holberton', 0
	format db '%s', 0
	newline db 10, 0

section .text
	global main
	extern printf

main:
	; Set up the stack frame
	push rbp
	mov rbp, rsp

	; Push the hello message on the stack
	mov rdi, hello
	call printf

	; Push the newline string on the stack
	mov rdi, newline
	call printf

	; Clean up the stack frame
	mov rsp, rbp
	pop rbp

	; Exit the program
	mov eax, 60		; syscall number for exit
	xor edi, edi	; exit status 0
	syscall
