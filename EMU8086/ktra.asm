.model small
.stack 100h
.data
    ms1 db 'Nhap 1 ky tu: $'
    ms2 db 13,10, 'Nhap 1 so: $'
    ms3 db 13,10, 'Day ky tu: $' 
    k   db ?
    n   db ?
.code
    main proc
        mov ax,@data
        mov ds,ax
        
        mov ah,9
        lea dx,ms1
        int 21h
        
        mov ah,1
        int 21h
        mov bl,al
        
        mov ah,9
        lea dx,ms2
        int 21h
        
        mov ah,1 
        int 21h
        mov cl,al
        
        
        mov ah,9
        lea dx,ms3
        int 21h
        
      
        mov k,48
        mov n,48
    
    lap:    
        mov ah,2
        mov dl,bl
        int 21h 
        
       
        inc k
        cmp k,cl
        jl lap
        je lap2
        
       
    lap2:    
        mov ah,2
        mov dl,bl
        sub dl,32
        int 21h
        
        inc n
        cmp n,cl 
        jl lap2
        je ketthuc     
        
   ketthuc:     
        mov ah,4ch
        int 21h
        
    endp
    end