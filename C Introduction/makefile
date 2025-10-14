CC = gcc
CFLAGS = -Wall -Werror -std=c11
LDFLAGS = -lcs50

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $(TARGET).c -o $(TARGET) $(LDFLAGS)

clean:
	rm -f $(TARGET)
