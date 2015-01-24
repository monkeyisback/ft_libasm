global _ft_toupper

; 0 - 48
; 9 - 57
; A - 65
; Z - 90
; a - 97
; z - 122

_ft_toupper:
	mov			eax, edi	; 32 bit register
	cmp			eax, 97
	jge			upval
	ret

upval:
	cmp			eax, 122
	jg			end
	sub			eax, 32
	ret

end:
	ret