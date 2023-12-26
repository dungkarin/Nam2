
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

.model small
.stack 100h
.data
ms1 db 'Nhap 1 ky tu: $'
ms2 db 10, 13, 'Ky tu dung truoc: $'
ms3 db 10, 13, 'Ky tu dung sau: $'


.code
main proc
mov ax, @data
mov ds, ax

; hien ms1
mov ah, 9
lea dx, ms1
int 21h


; nhap ky tu
mov ah, 1
int 21h ; ky tu luu trong al

inc al ; al = al + 1 97 98
mov bl, al

; hien ms3
mov ah, 9
lea dx, ms3
int 21h

mov ah, 2
mov dl, bl
int 21h

; hien ms2
mov ah, 9
lea dx, ms2
int 21h

dec bl ; 97
dec bl ; 96
mov ah, 2
mov dl, bl
int 21h

mov ah, 4ch
int 21h

main endp
end main

ret




