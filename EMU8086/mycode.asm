
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

.model  small
.stack 100h
.data
    ; khai bao du lieu
    s1  db  'Nhap 1 ky tu: $'
    s2  db  'Ky tu vua nhap la: $'

.code
    main proc

        mov ax, @data
        mov ds, ax

        mov ah, 9
        lea dx, s1
        int 21h

        ; nhap ky tu
        mov ah, 1
        int 21h     ; ky tu -> al

        mov ch, al  ; luu vao bl

        ; xuong dong va ve dau dong
        mov ah, 2
        mov dl, 10
        int 21h
        mov dl, 13
        int 21h

        mov ah, 9
        lea dx, s2
        int 21h

        ; hien ky tu vua nhap
        mov dl, ch
        mov ah, 2
        int 21h

        ; ket thuc chuong trinh
        mov ah, 4ch
        int 21h

    main endp

    end main

ret




