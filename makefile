# Makefile for SimuBatchr.
# Add new files to the SRCS variable

CC := g++ 
CFLAGS := -Wall -g

SRCS = SimuBatchr.c BatchrTask.c BatchrQueue.c
OBJS = $(SRCS:.c=.o)
MAIN = SimuBatchr

all: $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(MAIN)
	rm -f $(OBJS)