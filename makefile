# Makefile for Rush project

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address -I.

# Directories
SRC_DIR = src

# Source files
SRC = $(wildcard $(SRC_DIR)/*.c)

# Output executable
OUTPUT = rush

# Default rule
all: $(OUTPUT)

# Rule to create the executable
$(OUTPUT): $(SRC) library.h
	$(CC) $(CFLAGS) -o $(OUTPUT) $(SRC)

# Clean rule to remove the executable and object files
clean:
	rm -f $(OUTPUT)

# Phony targets
.PHONY: all clean
