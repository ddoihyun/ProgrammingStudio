CC = g++
SRC = DS033.cpp CouponStack.cpp
OBJ = $(SRC:.c=.o)
EXEC = DS033

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
