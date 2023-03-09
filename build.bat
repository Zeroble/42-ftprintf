IF "%1"=="E" (
	Echo HARD MODE BUILD
	gcc -Wall -Wextra -Werror *.c utils\*.c percentage_formats\*.c
) ELSE (
	Echo EASY MODE BUILD
	gcc *.c utils\*.c percentage_formats\*.c
)
.\a.exe
