section	.text
	global	ft_strcmp

ft_strcmp:
	mov		rax, 0
	mov		rdx, 0
	mov		rcx, 0

loop:
	mov		dl, byte [rdi + rax]
	mov		cl, byte [rsi + rax]
	cmp		dl, cl
	jne		return
	cmp		dl, 0
	je		return
	inc		rax
	jmp		loop

return:
	mov		rax, rdx
	sub		rax, rcx
	ret
