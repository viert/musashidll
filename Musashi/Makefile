CC = gcc
LD = ld
CFLAGS = -fPIC

libMusashi.so: m68kop.o m68kcpu.o m68kdasm.o Musashi.o
	$(LD) -shared $? -o $@

m68kop.o: m68kopac.o m68kopdm.o m68kopnz.o m68kops.o
	$(LD) -r $? -o $@

m68kopac.o: m68kopac.c 
	$(CC) $(CFLAGS) -c $? -o $@

m68kopdm.o: m68kopdm.c 
	$(CC) $(CFLAGS) -c $? -o $@

m68kopnz.o: m68kopnz.c 
	$(CC) $(CFLAGS) -c $? -o $@

m68kops.o: m68kops.c 
	$(CC) $(CFLAGS) -c $? -o $@

m68kcpu.o: m68kcpu.c 
	$(CC) $(CFLAGS) -c $? -o $@

m68kdasm.o: m68kdasm.c 
	$(CC) $(CFLAGS) -c $? -o $@

Musashi.o: Musashi.c
	$(CC) $(CFLAGS) -c $? -o $@

clean:
	rm -f *.o
	rm -f libMusashi.so