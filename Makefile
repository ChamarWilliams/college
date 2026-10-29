CC     = gcc
CFLAGS = -std=c11 -pedantic -Wall -Wextra -Werror -g

college: main.c college.c college.h
	$(CC) $(CFLAGS) main.c college.c -o college

clean:
	rm -f college
