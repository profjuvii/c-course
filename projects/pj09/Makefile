CC = gcc
CFLAGS = -Wall -Werror -std=c11
LDLIBS = -lm
OUTPUT = calculator

all: $(OUTPUT)

$(OUTPUT): main.o discriminant.o 
	cppcheck --enable=unusedFunction --error-exitcode=1 *.c
	$(CC) $(CFLAGS) $^ $(LDLIBS) -o $@

main.o: main.c 
	$(CC) $(CFLAGS) -c $^ -o $@

discriminant.o: discriminant.c 
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf *.o $(OUTPUT)
