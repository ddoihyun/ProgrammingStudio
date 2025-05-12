CC = g++
SRC = DS063.cpp MyLLQueue.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS063

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
