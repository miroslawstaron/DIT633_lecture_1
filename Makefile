# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g -Wno-unused-variable -Wno-unused-function

# Source files
SRCS = main.c input_and_output.c loops.c fibonacci.c fgets.c getch_example.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
EXEC = first_programs

# Default target
all: $(EXEC)

# Link object files to create the executable
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(EXEC)

# Phony targets
.PHONY: all clean