.model small
.stack 100h
.data
    ms1 db 'Nhap: $'
    ms2 db 13,10, 'Xuat: $'
    xau db 100 dup('$')
.code
    main proc
        mov ax,@data
        mov ds,ax
        
        lea dx,ms1
        mov ah,9
        int 21h
        
        mov ah,10
        lea dx,xau        
        int 21h

        lea dx,ms2
        mov ah,9
        int 21h  
      
        
        lea dx,xau+2
        int 21h
    
        mov ah,4ch
        int 21h
        
    endp
    end
            