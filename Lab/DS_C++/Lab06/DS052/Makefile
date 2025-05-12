CC = g++
SRC = DS052.cpp MyCircularQueue.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS052

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
