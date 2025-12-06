cc := g++
cflags := -Wall

SRCS := $(wildcard src/*.cpp)

all: bin/SimuBatchr

bin/SimuBatchr: $(SRCS)
	@mkdir -p bin
	$(cc) $(cflags) $^ -o $@

clean:
	rm -rf bin