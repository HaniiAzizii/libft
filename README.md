 This project has been created as part of the 42 curriculum by <haazizi>

 # Description :
 this is the very first project in the 42 curriculum , its goal is to create a custom C library (libft) 
 containing re-implemented functions from (libc) alongside understanding the behavior of each function written ,
 providing a strong foundation in in the topics covered by the project.

 # Instructions :

 Compilation : to compile this library , we need to execute the Makefile in our root directory using 
               the command : (make).

               this command will compile all .c files with -> -Wall -Wextra -Werror flags and generate libft.a 

               make : compiles all C files and create libft.a
               all : default rule of the Makefile 
               make clean : removes all compiled object files (.o)
               make fclean : removes all object files and the generated libft.a library 
               make re : recompiles the library from scratch (fclean + all)

# Resources : 

/Refrences --> Manual pages 
               C programming Language Standards ,
               Youtube Tutorials 

/AI Usage --> AI (Gemini) was utilized as an assistant during periods of this project for :

              * clarifying edge cases and memory safety in some functions 
              * help in writing test cases 
              * assisting in specific situations 


# Library Overview : 

/Functions :

1- ft_isalpha : checks whether a character is alphabetic or not

2- ft_isdigit : checks whether a character is a digit or not

3- ft_isalnum : checks whether a character is alphanumeric or not

4- ft_isascii : checks whether a character is within ASCII range or not

5- ft_isprint : checks if a character is printable 

6- ft_strlen : calculate the total length of a string 

7- ft_memset : fill the memory with a constant byte

8- ft_bzero : zero out a byte string

9- ft_memcpy : copy memory area

10- ft_memmove : copy memory area with overlap saftey

11- ft_strlcpy : size bounding string copying

12- ft_strlcat : size bounding string concatenation

13- ft_toupper : converting a character to uppercase

14- ft_tolower : converting a character to lowercase

15- ft_strchr : locate a character in string (first occurence)

16- ft_strrchr : locate a character in string (last occurence)

17- ft_strncmp : comparing 2 strings up to (n) bytes 

18- ft_memchr : scan memory for a character 

19- ft_memcmp : compare memory areas

20- ft_strnstr : locate a substring in a string within a length limit

21- ft_atoi : convert a string to integer

22- ft_calloc : allocate memory to zero

23- ft_strdup : duplicate a string using DMA

24- ft_substr : extract a substing from a string 

25- ft_strjoin : joining 2 strings into a new one

26- ft_strtrim : trim specified characters from the beginning and the end of a string

27- ft_split : splits a string into an array of strings 

28- ft_itoa : converting an integer to a string

29- ft_strmapi : apply a function to each character of a string

30- ft_striteri : apply a function to each character of a string by reference 

31- ft_putchar_fd : output a character to a given file

32- ft_putstr_fd : output a string to a given file

33- ft_putendl_fd : outputs a string followed by a newline to a file

34- ft_putnbr_fd : outputs a number to a given file

35- ft_lstnew : create a new list node

36- ft_lstadd_front : adds a node at the beginning of a list

37- ft_lstsize : count the number of nodes in a list

38- ft_lstlast : returns the last node in a list

39- ft_lstadd_back : adds a node at the end of a list

40- ft_lstdelone : frees a node's content using (delete) function

41- ft_lstclear : delete and free nodes in a list

42- ft_lstiter : iterate over a list and apply a function to each node 

43- ft_lstmap : iterate over a list and create a new list with the modified content
