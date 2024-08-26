all: loop_unroll 

perfstats.o: perfstats.c perfstats.h
	gcc -g -DHAVE_LINUX_PERF_EVENT_H -O3 $(EXTRA_OPTS) -I$(PWD) $(LIBS) -o perfstats.o -c perfstats.c

calculate_sum.o: calculate_sum.c
	gcc -g -DHAVE_LINUX_PERF_EVENT_H -O3 $(EXTRA_OPTS) -I$(PWD) $(LIBS) -o calculate_sum.o -c calculate_sum.c

loop_unroll: loop_unroll.c calculate_sum.o perfstats.o
	g++ -O3 -DHAVE_LINUX_PERF_EVENT_H $(EXTRA_OPTS) loop_unroll.c perfstats.o calculate_sum.o -o loop_unroll

clean:
		rm -f madd loop_unroll.c *.o
