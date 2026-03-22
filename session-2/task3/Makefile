
# Variables
CC = gcc
CFLAGS = -Wall -Wextra
TARGET = student
OBJS = main.o student.o

.PHONY: all clean

all: $(TARGET)

# Default target
$(TARGET): $(OBJS)
		$(CC) $(OBJS) -o $(TARGET)

# Object files
%.o: %.c student.h structure.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean-up
clean:
	rm -f $(OBJS) $(TARGET)