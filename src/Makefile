include ../.Makefile.inc

SKULL_LIBS = \
    -pthread \
    -ldl \
    -lrt

# output
STATIC_LIB = libskull-malloc.a
DYNAMIC_LIB = libskull-malloc.so

# Objs
OBJS = \
       malloc.o

# target rules
all: $(STATIC_LIB) $(DYNAMIC_LIB)

$(STATIC_LIB): $(OBJS)
	$(SKULL_LD) -o $@ $^ $(SKULL_LIBS)

$(DYNAMIC_LIB): $(OBJS)
	ar -rcs $@ $^

%.o: %.c
	$(SKULL_CC) -c $< -o $@

install:
	test -d $(prefix)/lib || mkdir -p $(prefix)/lib
	test -d $(prefix)/include/skull || mkdir -p $(prefix)/include/skull
	test -f $(STATIC_LIB) && cp $(STATIC_LIB) $(prefix)/lib
	test -f $(DYNAMIC_LIB) && cp $(DYNAMIC_LIB) $(prefix)/lib
	test -f malloc.c && cp malloc.c $(prefix)/include/skull

clean:
	rm -f $(STATIC_LIB) $(DYNAMIC_LIB) $(OBJS)

.PHONY: all clean install
