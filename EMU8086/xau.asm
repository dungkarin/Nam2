.model small
.stack 100h
.data
    ms1 db 'Nhap xau: $'
    ms2 db 13,10, 'Xuat xau: $'
    xau db ?
.code 
    main proc  
        mov ax,@data
        mov ds,ax
        
        lea dx,ms1
        mov ah,9
        int 21h 
        
        lea si,xau
        mov ah,1
    Nhap:    
                
        int 21h 
        cmp al,13
        je Enter
        mov [si],al
        inc si
 
        jmp Nhap
   Enter: 
        mov [si],'$'    
        lea dx,ms2
        mov ah,9
        int 21h
            
       
        lea dx,xau 
        int 21h
        
           
        mov ah,4ch
        int 21h   
    endp
    end main
        
            