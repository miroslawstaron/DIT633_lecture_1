# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g -Wno-unused-variable -Wno-unused-function

# Shared source files
COMMON_SRCS = input_and_output.c loops.c fibonacci.c fgets.c getch_example.c

# Executable names
EXEC = first_programs
TARGETS = $(EXEC) main_arguments main_loops main_inout main_getch main_fgets main_assert

# Default target builds all executables
all: $(TARGETS)

# Link object files to create the executable
$(EXEC): main.c $(COMMON_SRCS)
	$(CC) $(CFLAGS) -o $@ $^

main_arguments: main_arguments.c
	$(CC) $(CFLAGS) -o $@ $^

main_loops: main_loops_entry.c loops.c
	$(CC) $(CFLAGS) -o $@ $^

main_inout: main_inout_entry.c input_and_output.c
	$(CC) $(CFLAGS) -o $@ $^

main_getch: main_getch_entry.c getch_example.c
	$(CC) $(CFLAGS) -o $@ $^

main_fgets: main_fgets_entry.c fgets.c getch_example.c
	$(CC) $(CFLAGS) -o $@ $^

main_assert: main_assert_entry.c fibonacci.c
	$(CC) $(CFLAGS) -o $@ $^

# Clean up object files and executable
clean:
	rm -f *.o $(TARGETS)

# Phony targets
.PHONY: all clean