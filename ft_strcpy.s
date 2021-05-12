section	.text
	global	ft_strcpy

ft_strcpy:
	mov		rax, 0

loop:
	mov 	dl, byte [rsi + rax]
	mov		byte [rdi + rax], dl
	cmp		dl, 0
	je		return
	inc		rax
	jmp 	loop

return:
	mov		rax, rdi
	ret
