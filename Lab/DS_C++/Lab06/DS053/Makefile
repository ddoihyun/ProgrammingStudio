CC = g++
SRC = DS053.cpp MyCircularStringQueue.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS053

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
