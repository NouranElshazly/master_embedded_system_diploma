#@copyright : nouran
CC =arm-none-eabi-
CFLAGES = -mcpu=cortex-m3  -gdwarf-2  

INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
project_name =Nouran-cortex_m3
all : $(project_name).bin
	@echo "=========Build is Done========="

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGES) $(INCS)  $< -o $@
$(project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	
$(project_name).bin : $(project_name).elf
	$(CC)objcopy.exe -O  binary $< $@
clean_all:
	rm *.o *.elf *.bin
clean:
	rm *.elf *.bin
