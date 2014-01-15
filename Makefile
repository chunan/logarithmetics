CC = g++
CXX = g++
CXXFLAGS = -I.


SRCS = logarithmetics.cpp
OBJS = $(addprefix obj/,$(SRCS:.cpp=.o))

TARGET = $(OBJS)

vpath %.o obj/

.PHONY: all clean test


all: CXXFLAGS:=-Wall -Werror -O2 $(CXXFLAGS)

all: mk_obj_dir $(TARGET) test

debug: CXXFLAGS:=$(CXXFLAGS) -DDEBUG -g

debug: mk_obj_dir $(TARGET) test


%.d: %.cpp
	$(CC) -M $(CXXFLAGS) $< > $@

obj/%.o: %.cpp
	$(CC) -c $(CXXFLAGS) -o $@ $^

test: test_logarithmetics.cpp
	${CC} ${CFLAGS} $(OBJS) $< -o $@

mk_obj_dir:
	@mkdir -p obj/

clean:
	$(RM) $(OBJS) test
