       global    main
          extern    printf
main:
	  mov   edi, real
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
real: db `Hello, Holberton\n`,0
