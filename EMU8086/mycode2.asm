.model small
.stack 100h
.data
ms1 db 'Nhap ky tu thu 1: $'
ms2 db 10, 13, 'Nhap ky tu thu 2: $'
ms3 db 10, 13, 'Day ky tu la: $'


.code
    main proc
        mov ax, @data
        mov ds, ax
        
        mov ah, 9
        lea dx, ms1
        int 21h

        mov ah, 1
        int 21h ; 
        mov bl,al
        
        mov ah, 9
        lea dx, ms2
        int 21h
        
        mov ah, 1
        int 21h 
        mov cl,al
        
        mov ah, 9
        lea dx, ms3
        int 21h
     
   inra:   
        mov ah, 2
        mov dl,bl
        int 21h
        
        inc bl
        
        cmp bl,cl
        jng inra
        
        mov ah, 4ch
        int 21h

    main endp
end main