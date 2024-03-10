CC=gcc
CFLAGS=-Wall

part1: fep251-assign4/part1.c
        $(CC) $(CFLAGS) -o part1 fep251-assign4/part1.c

part2: fep251-assign4/part2.c
        $(CC) $(CFLAGS) -o part2 fep251-assign4/part2.c

clean:
        rm -f part1 part2