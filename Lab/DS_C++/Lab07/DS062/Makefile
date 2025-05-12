CC = g++
SRC = DS062.cpp MyLLQueue.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS062

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
