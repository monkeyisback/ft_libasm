global _ft_bzero

_ft_bzero:
	push		rax
	push		rbx
	mov			rax, rdi
	mov			rbx, rsi
	cmp			rbx, 0
	jg			fillzero
	jmp			end

fillzero:
	mov byte	[rax], 0
	inc			rax
	dec			rbx
	cmp			rbx, 0
	jg			fillzero
	jmp			end

end:
	pop			rax
	pop			rbx
	ret