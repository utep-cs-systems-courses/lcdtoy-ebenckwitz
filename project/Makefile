# makfile configuration
COMMON_OBJECTS  =
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../timerLib -I../lcdLib
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all:
	(cd ../lcdLib && make libLcd.a)
	(cd ../timerLib && make install)

project_main.elf: ${COMMON_OBJECTS} main.o led.o interrrupt_handler.o 8x12font.o pentagon.o stateMachines.o switches.o ../lcdLib/lcdutils.o ../lcdLib/lcddraw.o ../lib/libTimer.a ../lcdLib/font-5x7.o ../lcdLib/font-8x12.o 
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: project_main.elf
	msp430loader.sh project_main.elf

clean:
	(cd ../lcdLib && make clean)
	(cd ../timerLib && make clean)
	rm -f *.o *.elf *~

project_main.o: ../lcdLib/lcdutils.h ../lcdLib/lcddraw.h ../timerLib/libTimer.h
	${CC} ${CFLAGS} -c -I../lcdLib
