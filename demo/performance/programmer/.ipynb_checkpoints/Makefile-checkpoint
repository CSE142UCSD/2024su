all: madd_A madd_B madd_A_O1 madd_B_O1 madd_A_O2 madd_B_O2 madd_A_O3 madd_B_O3 madd_A_O4 madd_B_O4 madd_change_freq
 
EXTRA_CFLAGS = -DHAVE_LINUX_PERF_EVENT_H -g

madd: madd.c 
	$(CC) -O0 $(EXTRA_CFLAGS) madd.c -o madd

madd_A: madd_A.c perfstats.o
	$(CC) -O0 $(EXTRA_CFLAGS) perfstats.o madd_A.c -o madd_A

madd_B: madd_B.c perfstats.o
	$(CC) -O0 $(EXTRA_CFLAGS) perfstats.o madd_B.c -o madd_B

madd_A_O1: madd_A.c perfstats.o
	$(CC) $(EXTRA_CFLAGS) -O1 perfstats.o madd_A.c -o madd_A_O1

madd_B_O1: madd_B.c perfstats.o
	$(CC) $(EXTRA_CFLAGS) -O1 perfstats.o madd_B.c -o madd_B_O1

madd_A_O2: madd_A.c perfstats.o
	$(CC) $(EXTRA_CFLAGS) -O2 perfstats.o madd_A.c -o madd_A_O2

madd_B_O2: madd_B.c perfstats.o
	$(CC) $(EXTRA_CFLAGS) -O2 perfstats.o madd_B.c -o madd_B_O2

madd_A_O3: madd_A.c perfstats.o
	$(CC) $(EXTRA_CFLAGS) -O3 perfstats.o madd_A.c -o madd_A_O3

madd_B_O3: madd_B.c perfstats.o
	$(CC) $(EXTRA_CFLAGS) -O3 perfstats.o madd_B.c -o madd_B_O3

madd_A_O4: madd_A.c perfstats.o
	$(CC) $(EXTRA_CFLAGS) -O4 perfstats.o madd_A.c -o madd_A_O4

madd_B_O4: madd_B.c perfstats.o
	$(CC) $(EXTRA_CFLAGS) -O4 perfstats.o madd_B.c -o madd_B_O4
perfstats.o: perfstats.c 
	$(CC) -O3 $(EXTRA_CFLAGS) perfstats.c -c

madd_change_freq: madd_change_freq.c perfstats.o
	$(CC) -O3 $(EXTRA_CFLAGS) -DA madd_change_freq.c perfstats.o -o madd_change_freq

clean:
		rm -f madd_A madd_B madd_change_freq madd_A_O1 madd_B_O1 madd_A_O2 madd_B_O2 madd_A_O3 madd_B_O3 madd_A_O4 madd_B_O4 *~
		#hotspot hotspot_omp
		