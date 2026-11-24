section .text 

global ft_strcpy

ft_strcpy:
	xor	rcx, rcx

.loop:
	mov		al, [rsi + rcx]
	mov 	[rdi + rcx], al

	test	al, al
	jz		.end

	inc		rcx
	jmp		.loop

.end:
	mov		rax, rdi
	ret