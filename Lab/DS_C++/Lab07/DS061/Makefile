CC = g++
SRC = DS061.cpp MyLLQueue.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS061

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
