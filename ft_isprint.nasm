global _ft_isprint

; 0 - 48
; 9 - 57
; A - 65
; Z - 90
; a - 97
; z - 122

; http://www.cplusplus.com/reference/cctype/isprint/
; For the standard ASCII character set (used by the "C" locale), printing characters are all with an ASCII code greater than 0x1f (US), except 0x7f (DEL).
; ==> range : [21 - 126] included are true

_ft_isprint:
	mov			eax, edi	; 32 bit register
	cmp			eax, 20
	jle			endfalse	; <= 20 = false
	cmp			eax, 127
	jge			endfalse	; >= 127 = false
	jmp			endtrue		; true

endtrue:
	mov			eax, 1
	ret

endfalse:
	mov			eax, 0
	ret