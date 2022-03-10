# get_next_line
no bonuses


For detailed information, refer to the **[subject of this project](https://github.com/ilnrzakirov/get_next_line/blob/main/en.subject.pdf)**

<br> • Calling your function get_next_line in a loop will then allow you to read the text
available on the file descriptor one line at a time until the end of it.</br> 
<br> • Your function should return the line that has just been read. If there is nothing
else to read or if an error has occurred it should return NULL.</br>
<br> • Make sure that your function behaves well when it reads from a file and when it
reads from the standard input.</br>
<br> • libft is not allowed for this project. You must add a get_next_line_utils.c file
which will contain the functions that are needed for your get_next_line to work.</br>
<br> • Your program must compile with the flag -D BUFFER_SIZE=xx which will be used
as the buffer size for the read calls in your get_next_line. This value will be
modified by your evaluators and by the moulinette.</br>
<br> • The program will be compiled in this way:</br>
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c.
<br> • Your read must use the BUFFER_SIZE defined during compilation to read from
a file or from stdin. This value will be modified during the evaluation for testing
purposes.</br>
<br> • In the header file get_next_line.h you must have at least the prototype of the
function get_next_line.</br>
