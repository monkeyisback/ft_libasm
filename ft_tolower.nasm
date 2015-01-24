global _ft_tolower

; 0 - 48
; 9 - 57
; A - 65
; Z - 90
; a - 97
; z - 122

_ft_tolower:
	mov			eax, edi	; 32 bit register
	cmp			eax, 65
	jge			downval
	ret

downval:
	cmp			eax, 90
	jg			end
	add			eax, 32
	ret

end:
	ret