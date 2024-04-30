c2r2s3% ./run_test 
                      First part
.-"-.     .-"-.     .-"-.     .-"-.     .-"-.     .-"-.
     "-.-"     "-.-"     "-.-"     "-.-"     "-.-"    
ft_memset:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_bzero:      [OK] [OK] [OK] [CRASH] 
[crash]: your bzero crash because it read too many bytes !

ft_memcpy:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH] 
[crash]: your memcpy does not behave well with NULL as both params with size

ft_memmove:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [CRASH] [OK] 
[crash]: your memmove does not well with NULL as both parameters and size

ft_memchr:     [OK] [FAILED] [OK] [OK] [OK] [OK] [OK] [OK] 
[fail]: your memchr does not cast in unsigned the memory

ft_memcmp:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strlen:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_isalpha:    [OK] 
ft_isdigit:    [OK] 
ft_isalnum:    [OK] 
ft_isascii:    [OK] 
ft_isprint:    [OK] 
ft_toupper:    [OK] 
ft_tolower:    [OK] 
ft_strchr:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strrchr:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_strncmp:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [NO CRASH] [NO CRASH] 
[no crash]: your strncmp does not segfault when null parameter is sent
[no crash]: your strncmp does not segfault when null parameter is sent

ft_strlcpy:    [OK] [OK] [FAILED] [OK] [FAILED] [OK] [OK] 
[fail]: your strlcpy overflow the dest
[fail]: your strlcpy does not works with 0-length string

ft_strlcat:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [NO CRASH] [OK] [OK] 
[no crash]: your strlcat does not segfault when null parameter is sent

ft_strnstr:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [FAILED] [OK] [OK] [NO CRASH] [OK] 
[fail]: your strnstr does not work with the same pointer and an exceeding length value
[no crash]: your strnstr does not segfault when null parameter is sent

ft_atoi:       [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 
ft_calloc:     [OK] [OK] [OK] [OK] [OK] 
ft_strdup:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

In this part, you can choose to protect your function or not to,
a color code will tell you if your function is protected/not BUT stay coherent !
[🛡 ] --> protected
[💥 ] --> not protected
                     Second part
 __)(__  __)(__  __)(__  __)(__  __)(__  __)(__  __)(__  __)
(______)(______)(______)(______)(______)(______)(______)(___

ft_substr:     [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [💥 ] [OK] 
ft_strjoin:    [OK] [OK] [OK] [OK] [OK] [💥 ] 
ft_strtrim:    [OK] [OK] [OK] [CRASH] [OK] [OK] [OK] [OK] [OK] [💥 ] 
[crash]: your strtrim does not work with full blank input

ft_split:      [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [💥 ] 
ft_itoa:       [OK] [OK] [OK] [OK] [OK] [CRASH] [KO] [KO] [CRASH] 
[crash]: you did not protect your malloc
[KO]: your itoa does not allocate the good size so the \0 test may be false
[KO]: your itoa does not allocate the good size so the \0 test may be false
[crash]: your itoa did not allocate memory for the int min value

ft_strmapi:    [OK] [OK] [OK] [OK] [OK] [💥 ] 
ft_putchar_fd: [OK] [OK] 
ft_putstr_fd:  [OK] [OK] [💥 ] 
ft_putendl_fd: [OK] [OK] [💥 ] 
ft_putnbr_fd:  [OK] [OK] [OK] [OK] [OK] 

 /~~~\/~~\/~~~\/~~~\/~~\/~~~\                    /~~~\/~~\/~~~\/~~~\/~~\/~~~\
 | /\/ /\/ /\ || /\/ /\/ /\ |                    | /\ \/\ \/\ || /\ \/\ \/\ |
  \ \/ /\/ /\/ /\ \/ /\/ /\/ /     Bonus part     \ \/\ \/\ \/ /\ \/\ \/\ \/ /
   \ \/\ \/\ \/  \ \/\ \/\ \/                      \/ /\/ /\/ /  \/ /\/ /\/ /
,_/\ \/\ \/\ \__/\ \/\ \/\ \______________________/ /\/ /\/ /\__/ /\/ /\/ /\_,
(__/\__/\__/\____/\__/\__/\________________________/\__/\__/\____/\__/\__/\__)

ft_lstnew:     [MISSING]
ft_lstadd_front: [MISSING]
ft_lstsize:    [MISSING]
ft_lstlast:    [MISSING]
ft_lstadd_back:[MISSING]
ft_lstdelone:  [MISSING]
ft_lstclear:   [MISSING]
ft_lstiter:    [MISSING]
ft_lstmap:     [MISSING]
ft_striteri:   [OK] [OK] [💥 ] 
ft_strndup:    [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] dyld: warning: could not load inserted library './assets/malloc.dylib' into hardened process because no suitable image found.  Did find:
        ./assets/malloc.dylib: code signature in (./assets/malloc.dylib) not valid for use in process using Library Validation: mapped file has no cdhash, completely unsigned? Code has to be at least ad-hoc signed.
        ./assets/malloc.dylib: stat() failed with errno=1


⚠ : your libft is using forbidden functions so the result may not be relevant !

See result.log for more informations !