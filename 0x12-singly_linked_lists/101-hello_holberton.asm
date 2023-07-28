SECTION .data
    hello_msg   db "Hello, Holberton", 0
    format_str  db "%s", 10, 0

SECTION .text
    extern printf
    global main

main:
    ; Load message address into ESI
    mov     esi, hello_msg

    ; Load format string address into EDI
    mov     edi, format_str

    ; Clear EAX register (used for function return values)
    xor     eax, eax

    ; Call the printf function
    call    printf

    ; Clear EAX register again (optional, depends on context)
    xor     eax, eax

    ; Return from the main function
    ret

