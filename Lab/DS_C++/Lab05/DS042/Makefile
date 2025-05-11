CC = g++
SRC = DS042.cpp MyLinkedStack.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS042

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
