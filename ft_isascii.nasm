global _ft_isascii

; 0 - 48
; 9 - 57
; A - 65
; Z - 90
; a - 97
; z - 122

_ft_isascii:
	mov			eax, edi	; 32 bit register
	cmp			eax, 0
	jl			endfalse	; < 0 = false
	cmp			eax, 127
	jg			endfalse	; > 127 = false
	jmp			endtrue		; true

endtrue:
	mov			eax, 1
	ret

endfalse:
	mov			eax, 0
	ret