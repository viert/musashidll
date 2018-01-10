#include "stdafx.h"

unsigned int(*read_8)(unsigned int);
unsigned int(*read_16)(unsigned int);
unsigned int(*read_32)(unsigned int);
unsigned int(*read_dasm_16)(unsigned int);
unsigned int(*read_dasm_32)(unsigned int);
void(*write_8)(unsigned int, unsigned int);
void(*write_16)(unsigned int, unsigned int);
void(*write_32)(unsigned int, unsigned int);

unsigned int m68k_read_memory_8(unsigned int addr) {
	if (read_8 == NULL) return 0;
	return read_8(addr);
}

unsigned int m68k_read_memory_16(unsigned int addr) {
	if (read_16 == NULL) return 0;
	return read_16(addr);
}

unsigned int m68k_read_memory_32(unsigned int addr) {
	if (read_32 == NULL) return 0;
	return read_32(addr);
}

unsigned int m68k_read_disassembler_16(unsigned int addr) {
	if (read_dasm_16 == NULL) return 0;
	return read_dasm_16(addr);
}

unsigned int m68k_read_disassembler_32(unsigned int addr) {
	if (read_dasm_32 == NULL) return 0;
	return read_dasm_32(addr);
}

void m68k_write_memory_8(unsigned int addr, unsigned int data) {
	if (write_8 == NULL) return;
	write_8(addr, data);
}

void m68k_write_memory_16(unsigned int addr, unsigned int data) {
	if (write_16 == NULL) return;
	write_16(addr, data);
}

void m68k_write_memory_32(unsigned int addr, unsigned int data) {
	if (write_32 == NULL) return;
	write_32(addr, data);
}


EXTERN_C DLLEXPORT void set_read_8(unsigned int(*callback)(unsigned int)) {
	read_8 = callback;
}
EXTERN_C DLLEXPORT void set_read_16(unsigned int(*callback)(unsigned int)) {
	read_16 = callback;
}
EXTERN_C DLLEXPORT void set_read_32(unsigned int(*callback)(unsigned int)) {
	read_32 = callback;
}
EXTERN_C DLLEXPORT void set_read_dasm_16(unsigned int(*callback)(unsigned int)) {
	read_dasm_16 = callback;
}
EXTERN_C DLLEXPORT void set_read_dasm_32(unsigned int(*callback)(unsigned int)) {
	read_dasm_32 = callback;
}
EXTERN_C DLLEXPORT void set_write_8(void(*callback)(unsigned int, unsigned int)) {
	write_8 = callback;
}
EXTERN_C DLLEXPORT void set_write_16(void(*callback)(unsigned int, unsigned int)) {
	write_16 = callback;
}
EXTERN_C DLLEXPORT void set_write_32(void(*callback)(unsigned int, unsigned int)) {
	write_32 = callback;
}
