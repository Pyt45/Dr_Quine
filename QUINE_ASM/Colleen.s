	global main
	extern printf
	section .text

; 1 Comment.

main:
	; 2 Comment.
	mov r12, str
	call Colleen

Colleen:
	mov rdi, str
	mov rsi, str
	mov rdx, 10
	mov rcx, 9
	mov r8, 39
	call printf
	mov rax, 60
	mov rdi, 0
	syscall

	section .rodata:
	str:	db '%3$cglobal main%2$c%3$cextern printf%2$c%3$csection .text%2$c%2$c; 1 Comment.%2$c%2$cmain:%2$c%3$c; 2 Comment.%2$c%3$cmov r12, str%2$c%3$ccall Colleen%2$c%2$cColleen:%2$c%3$cmov rdi, str%2$c%3$cmove rsi, str%2$c%3$cmov rdx, 10%2$c%3$cmov rcx, 9%2$c%3$cmov r8, 39%2$c%3$ccall printf%2$c%3$cmov rax, 60%2$c%3$cmov rdi, 0%2$c%3$csyscall%2$c%2$c%3$csection .rodata:%2$c%3$cstr:%3$cdb %4$c%1$s%4$c%2$c%2$c'
