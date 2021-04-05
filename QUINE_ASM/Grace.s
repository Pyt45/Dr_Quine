	global _main
	extern _dprintf
	section .text

; 1 Comment .

%macro GRACE_KID 2
	; rdi, rsi
	mov rdx, rsi
	mov rcx, 10
	mov r8, 9
	mov r9, 34
	; rdi, rsi, rdx, rcx, r8, r9
	call _dprintf
	mov rax, 0x2000001
	mov rdi, 0
	syscall
%endmacro

%macro GRADE_PROGRAM 1

	_main:
		

%endmacro