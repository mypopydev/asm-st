SOURCES	= movr_n_10.s movr_n_100.s movr_r_10.s movr_r_100.s \
	  movc_n_10.s movc_n_100.s \
	  addr_1_10.c addr_1_100.c addr_2_10.c addr_2_100.c \
	  addr_3_10.c addr_3_100.c addr_4_10.c addr_4_100.c \
	  addc_1_10.c addc_1_100.c addc_2_10.c addc_2_100.c \
	  addc_3_10.c addc_3_100.c addc_4_10.c addc_4_100.c \
	  mulr_1_10.c mulr_1_100.c mulr_2_10.c mulr_2_100.c \
	  mulr_3_10.c mulr_3_100.c mulr_4_10.c mulr_4_100.c \
	  mulc2_1_10.c mulc2_1_100.c mulc2_2_10.c mulc2_2_100.c \
	  mulc2_3_10.c mulc2_3_100.c mulc2_4_10.c mulc2_4_100.c \
	  mulc4_1_10.c mulc4_1_100.c mulc4_2_10.c mulc4_2_100.c \
	  mulc4_3_10.c mulc4_3_100.c mulc4_4_10.c mulc4_4_100.c \
	  mulc5_1_10.c mulc5_1_100.c mulc5_2_10.c mulc5_2_100.c \
	  mulc5_3_10.c mulc5_3_100.c mulc5_4_10.c mulc5_4_100.c \
	  divr_1_10.c divr_1_100.c divr_2_10.c divr_2_100.c \
	  divr_3_10.c divr_3_100.c divr_4_10.c divr_4_100.c \
	  divc2_1_10.c divc2_1_100.c divc2_2_10.c divc2_2_100.c \
	  divc2_3_10.c divc2_3_100.c divc2_4_10.c divc2_4_100.c \
	  divc4_1_10.c divc4_1_100.c divc4_2_10.c divc4_2_100.c \
	  divc4_3_10.c divc4_3_100.c divc4_4_10.c divc4_4_100.c \
	  divc5_1_10.c divc5_1_100.c divc5_2_10.c divc5_2_100.c \
	  divc5_3_10.c divc5_3_100.c divc5_4_10.c divc5_4_100.c \
	  udivr_1_10.c udivr_1_100.c udivr_2_10.c udivr_2_100.c \
	  udivr_3_10.c udivr_3_100.c udivr_4_10.c udivr_4_100.c \
	  udivc2_1_10.c udivc2_1_100.c udivc2_2_10.c udivc2_2_100.c \
	  udivc2_3_10.c udivc2_3_100.c udivc2_4_10.c udivc2_4_100.c \
	  udivc4_1_10.c udivc4_1_100.c udivc4_2_10.c udivc4_2_100.c \
	  udivc4_3_10.c udivc4_3_100.c udivc4_4_10.c udivc4_4_100.c \
	  udivc5_1_10.c udivc5_1_100.c udivc5_2_10.c udivc5_2_100.c \
	  udivc5_3_10.c udivc5_3_100.c udivc5_4_10.c udivc5_4_100.c \
	  mrch_1_10.c mrch_1_100.c mrch_2_10.c mrch_2_100.c \
	  mrch_3_10.c mrch_3_100.c mrch_4_10.c mrch_4_100.c \
	  mrcm_1_10.c mrcm_1_100.c mrcm_2_10.c mrcm_2_100.c \
	  mrcm_3_10.c mrcm_3_100.c mrcm_4_10.c mrcm_4_100.c \
	  mwch_10.c mwch_100.c mwcm_10.c mwcm_100.c \
	  if_t_10.s if_t_100.s if_f_10.s if_f_100.s \
	  ifel_t_10.s ifel_t_100.s ifel_f_10.s ifel_f_100.s \
	  call_0_10.c call_0_100.c call_1_10.c call_1_100.c \
	  call_2_10.c call_2_100.c call_3_10.c call_3_100.c \
	  call_4_10.c call_4_100.c call_5_10.c call_5_100.c

TARGETS	= $(C_SRC:.c=)
C_SRC	= $(SOURCES:.s=.c)
S_SRC	= $(SOURCES:.c=.s)

GENSRC	= ./gensource.pl

CFLAGS	= -O
N	= 1000000000

all: compile time

compile: $(TARGETS)

movr_n_10.s: $(GENSRC)
	$(GENSRC) 0 'a += b;' 0 $N 0 0 0 1 0 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i '/DUMMY1/,/DUMMY2/s/addl/movl/' $@
movr_n_100.s: $(GENSRC)
	$(GENSRC) 0 'a += b;' 1 $N 0 0 0 1 0 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i '/DUMMY1/,/DUMMY2/s/addl/movl/' $@
movr_r_10.s: $(GENSRC)
	$(GENSRC) 1 'a += b;' 'b += a;' 0 $N 0 0 0 1 0 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i '/DUMMY1/,/DUMMY2/s/addl/movl/' $@
movr_r_100.s: $(GENSRC)
	$(GENSRC) 1 'a += b;' 'b += a;' 1 $N 0 0 0 1 0 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i '/DUMMY1/,/DUMMY2/s/addl/movl/' $@
movc_n_10.s: $(GENSRC)
	$(GENSRC) 0 'a += 3;' 0 $N 0 0 0 1 0 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i '/DUMMY1/,/DUMMY2/s/addl/movl/' $@
movc_n_100.s: $(GENSRC)
	$(GENSRC) 0 'a += 3;' 1 $N 0 0 0 1 0 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i '/DUMMY1/,/DUMMY2/s/addl/movl/' $@
addr_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b;' 0 $N 0 0 0 1 0 >$@
addr_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b;' 1 $N 0 0 0 1 0 >$@
addr_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b;' 0 $N 0 2 0 1 0 >$@
addr_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b;' 1 $N 0 2 0 1 0 >$@
addr_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b;' 0 $N 0 3 0 1 0 >$@
addr_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b;' 1 $N 0 3 0 1 0 >$@
addr_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b;' 0 $N 0 4 0 1 0 >$@
addr_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b;' 1 $N 0 4 0 1 0 >$@
addc_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A += 3;' 0 $N 0 0 0 0 0 >$@
addc_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A += 3;' 1 $N 0 0 0 0 0 >$@
addc_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A += 3;' 0 $N 0 2 0 0 0 >$@
addc_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A += 3;' 1 $N 0 2 0 0 0 >$@
addc_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A += 3;' 0 $N 0 3 0 0 0 >$@
addc_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A += 3;' 1 $N 0 3 0 0 0 >$@
addc_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A += 3;' 0 $N 0 4 0 0 0 >$@
addc_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A += 3;' 1 $N 0 4 0 0 0 >$@
mulr_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= b;' 0 $N 0 0 0 1 0 >$@
mulr_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= b;' 1 $N 0 0 0 1 0 >$@
mulr_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= b;' 0 $N 0 2 0 1 0 >$@
mulr_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= b;' 1 $N 0 2 0 1 0 >$@
mulr_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= b;' 0 $N 0 3 0 1 0 >$@
mulr_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= b;' 1 $N 0 3 0 1 0 >$@
mulr_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= b;' 0 $N 0 4 0 1 0 >$@
mulr_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= b;' 1 $N 0 4 0 1 0 >$@
mulc2_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 2;' 0 $N 0 0 0 0 0 >$@
mulc2_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 2;' 1 $N 0 0 0 0 0 >$@
mulc2_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 2;' 0 $N 0 2 0 0 0 >$@
mulc2_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 2;' 1 $N 0 2 0 0 0 >$@
mulc2_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 2;' 0 $N 0 3 0 0 0 >$@
mulc2_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 2;' 1 $N 0 3 0 0 0 >$@
mulc2_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 2;' 0 $N 0 4 0 0 0 >$@
mulc2_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 2;' 1 $N 0 4 0 0 0 >$@
mulc4_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 4;' 0 $N 0 0 0 0 0 >$@
mulc4_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 4;' 1 $N 0 0 0 0 0 >$@
mulc4_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 4;' 0 $N 0 2 0 0 0 >$@
mulc4_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 4;' 1 $N 0 2 0 0 0 >$@
mulc4_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 4;' 0 $N 0 3 0 0 0 >$@
mulc4_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 4;' 1 $N 0 3 0 0 0 >$@
mulc4_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 4;' 0 $N 0 4 0 0 0 >$@
mulc4_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 4;' 1 $N 0 4 0 0 0 >$@
mulc5_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 5;' 0 $N 0 0 0 0 0 >$@
mulc5_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 5;' 1 $N 0 0 0 0 0 >$@
mulc5_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 5;' 0 $N 0 2 0 0 0 >$@
mulc5_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 5;' 1 $N 0 2 0 0 0 >$@
mulc5_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 5;' 0 $N 0 3 0 0 0 >$@
mulc5_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 5;' 1 $N 0 3 0 0 0 >$@
mulc5_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A *= 5;' 0 $N 0 4 0 0 0 >$@
mulc5_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A *= 5;' 1 $N 0 4 0 0 0 >$@
divr_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 0 $N 0 0 1 1 1 >$@
divr_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 1 $N 0 0 1 1 1 >$@
divr_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 0 $N 0 2 1 1 1 >$@
divr_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 1 $N 0 2 1 1 1 >$@
divr_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 0 $N 0 3 1 1 1 >$@
divr_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 1 $N 0 3 1 1 1 >$@
divr_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 0 $N 0 4 1 1 1 >$@
divr_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 1 $N 0 4 1 1 1 >$@
divc2_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 0 $N 0 0 1 0 0 >$@
divc2_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 1 $N 0 0 1 0 0 >$@
divc2_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 0 $N 0 2 1 0 0 >$@
divc2_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 1 $N 0 2 1 0 0 >$@
divc2_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 0 $N 0 3 1 0 0 >$@
divc2_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 1 $N 0 3 1 0 0 >$@
divc2_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 0 $N 0 4 1 0 0 >$@
divc2_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 1 $N 0 4 1 0 0 >$@
divc4_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 0 $N 0 0 1 0 0 >$@
divc4_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 1 $N 0 0 1 0 0 >$@
divc4_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 0 $N 0 2 1 0 0 >$@
divc4_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 1 $N 0 2 1 0 0 >$@
divc4_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 0 $N 0 3 1 0 0 >$@
divc4_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 1 $N 0 3 1 0 0 >$@
divc4_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 0 $N 0 4 1 0 0 >$@
divc4_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 1 $N 0 4 1 0 0 >$@
divc5_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 0 $N 0 0 1 0 0 >$@
divc5_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 1 $N 0 0 1 0 0 >$@
divc5_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 0 $N 0 2 1 0 0 >$@
divc5_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 1 $N 0 2 1 0 0 >$@
divc5_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 0 $N 0 3 1 0 0 >$@
divc5_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 1 $N 0 3 1 0 0 >$@
divc5_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 0 $N 0 4 1 0 0 >$@
divc5_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 1 $N 0 4 1 0 0 >$@
udivr_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 0 $N 1 0 1 1 1 >$@
udivr_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 1 $N 1 0 1 1 1 >$@
udivr_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 0 $N 1 2 1 1 1 >$@
udivr_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 1 $N 1 2 1 1 1 >$@
udivr_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 0 $N 1 3 1 1 1 >$@
udivr_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 1 $N 1 3 1 1 1 >$@
udivr_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 0 $N 1 4 1 1 1 >$@
udivr_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= b;' 1 $N 1 4 1 1 1 >$@
udivc2_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 0 $N 1 0 1 0 0 >$@
udivc2_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 1 $N 1 0 1 0 0 >$@
udivc2_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 0 $N 1 2 1 0 0 >$@
udivc2_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 1 $N 1 2 1 0 0 >$@
udivc2_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 0 $N 1 3 1 0 0 >$@
udivc2_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 1 $N 1 3 1 0 0 >$@
udivc2_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 0 $N 1 4 1 0 0 >$@
udivc2_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 2;' 1 $N 1 4 1 0 0 >$@
udivc4_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 0 $N 1 0 1 0 0 >$@
udivc4_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 1 $N 1 0 1 0 0 >$@
udivc4_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 0 $N 1 2 1 0 0 >$@
udivc4_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 1 $N 1 2 1 0 0 >$@
udivc4_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 0 $N 1 3 1 0 0 >$@
udivc4_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 1 $N 1 3 1 0 0 >$@
udivc4_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 0 $N 1 4 1 0 0 >$@
udivc4_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 4;' 1 $N 1 4 1 0 0 >$@
udivc5_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 0 $N 1 0 1 0 0 >$@
udivc5_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 1 $N 1 0 1 0 0 >$@
udivc5_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 0 $N 1 2 1 0 0 >$@
udivc5_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 1 $N 1 2 1 0 0 >$@
udivc5_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 0 $N 1 3 1 0 0 >$@
udivc5_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 1 $N 1 3 1 0 0 >$@
udivc5_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 0 $N 1 4 1 0 0 >$@
udivc5_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A /= 5;' 1 $N 1 4 1 0 0 >$@
mrch_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 0 $N 0 0 0 2 0 >$@
mrch_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 1 $N 0 0 0 2 0 >$@
mrch_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 0 $N 0 2 0 2 0 >$@
mrch_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 1 $N 0 2 0 2 0 >$@
mrch_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 0 $N 0 3 0 2 0 >$@
mrch_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 1 $N 0 3 0 2 0 >$@
mrch_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 0 $N 0 4 0 2 0 >$@
mrch_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 1 $N 0 4 0 2 0 >$@
mrcm_1_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 0 $N 0 0 0 3 0 >$@
mrcm_1_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 1 $N 0 0 0 3 0 >$@
mrcm_2_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 0 $N 0 2 0 3 0 >$@
mrcm_2_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 1 $N 0 2 0 3 0 >$@
mrcm_3_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 0 $N 0 3 0 3 0 >$@
mrcm_3_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 1 $N 0 3 0 3 0 >$@
mrcm_4_10.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 0 $N 0 4 0 3 0 >$@
mrcm_4_100.c: $(GENSRC)
	$(GENSRC) 0 'A += b[I * X];' 1 $N 0 4 0 3 0 >$@
mwch_10.c: $(GENSRC)
	$(GENSRC) 0 'b[I * X] = a;' 0 $N 0 0 0 2 0 >$@
mwch_100.c: $(GENSRC)
	$(GENSRC) 0 'b[I * X] = a;' 1 $N 0 0 0 2 0 >$@
mwcm_10.c: $(GENSRC)
	$(GENSRC) 0 'b[I * X] = a;' 0 $N 0 0 0 3 0 >$@
mwcm_100.c: $(GENSRC)
	$(GENSRC) 0 'b[I * X] = a;' 1 $N 0 0 0 3 0 >$@
if_t_10.s: $(GENSRC)
	$(GENSRC) 0 'if (b < 0) a++;' 0 $N 0 0 0 1 -1 >$*.c
	sed -i -e 's/int a =/ register int a asm("ebx") =/' \
	 -e 's/int b =/ register int b asm("ecx") =/' $*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i -e '/DUMMY1/,/DUMMY2/{' \
		-e 's/\(j[a-z]*\)\t\.L.*/\1\t1f/' \
		-e 's/\tjmp\t.*/1:/' \
		-e '/\.p2align/d' \
		-e '/incl\t/,/^\.L/s/^\.L.*:/&1:/' \
		-e '}' \
		-e 's/DUMMY2/1/' $@
if_t_100.s: $(GENSRC)
	$(GENSRC) 0 'if (b < 0) a++;' 1 $N 0 0 0 1 -1 >$*.c
	sed -i -e 's/int a =/ register int a asm("ebx") =/' \
	 -e 's/int b =/ register int b asm("ecx") =/' $*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i -e '/DUMMY1/,/DUMMY2/{' \
		-e 's/\(j[a-z]*\)\t\.L.*/\1\t1f/' \
		-e 's/\tjmp\t.*/1:/' \
		-e '/\.p2align/d' \
		-e '/incl\t/,/^\.L/s/^\.L.*:/&1:/' \
		-e '}' \
		-e 's/DUMMY2/1/' $@
if_f_10.s: $(GENSRC)
	$(GENSRC) 0 'if (b < 0) a++;' 0 $N 0 0 0 1 0 >$*.c
	sed -i -e 's/int a =/ register int a asm("ebx") =/' \
	 -e 's/int b =/ register int b asm("ecx") =/' $*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i -e '/DUMMY1/,/DUMMY2/{' \
		-e 's/\(j[a-z]*\)\t\.L.*/\1\t1f/' \
		-e 's/\tjmp\t.*/1:/' \
		-e '/\.p2align/d' \
		-e '/incl\t/,/^\.L/s/^\.L.*:/&1:/' \
		-e '}' \
		-e 's/DUMMY2/1/' $@
if_f_100.s: $(GENSRC)
	$(GENSRC) 0 'if (b < 0) a++;' 1 $N 0 0 0 1 0 >$*.c
	sed -i -e 's/int a =/ register int a asm("ebx") =/' \
	 -e 's/int b =/ register int b asm("ecx") =/' $*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i -e '/DUMMY1/,/DUMMY2/{' \
		-e 's/\(j[a-z]*\)\t\.L.*/\1\t1f/' \
		-e 's/\tjmp\t.*/1:/' \
		-e '/\.p2align/d' \
		-e '/incl\t/,/^\.L/s/^\.L.*:/&1:/' \
		-e '}' \
		-e 's/DUMMY2/1/' $@
ifel_t_10.s: $(GENSRC)
	$(GENSRC) 0 'if (b < 0) a++; else a--;' 0 $N 0 0 0 1 -1 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i -e '/DUMMY1/,/DUMMY2/{' \
		-e '/addl/,/jmp/{ /jmp/s/\.L.*/1f/ }' \
		-e '/subl/,/jmp/{ /jmp/s/.*/1:/ }' \
		-e '/\.p2align/d' \
		-e '}' \
		-e 's/DUMMY2/1/' $@
ifel_t_100.s: $(GENSRC)
	$(GENSRC) 0 'if (b < 0) a++; else a--;' 1 $N 0 0 0 1 -1 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i -e '/DUMMY1/,/DUMMY2/{' \
		-e '/addl/,/jmp/{ /jmp/s/\.L.*/1f/ }' \
		-e '/subl/,/jmp/{ /jmp/s/.*/1:/ }' \
		-e '/\.p2align/d' \
		-e '}' \
		-e 's/DUMMY2/1/' $@
ifel_f_10.s: $(GENSRC)
	$(GENSRC) 0 'if (b < 0) a++; else a--;' 0 $N 0 0 0 1 0 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i -e '/DUMMY1/,/DUMMY2/{' \
		-e '/addl/,/jmp/{ /jmp/s/\.L.*/1f/ }' \
		-e '/subl/,/jmp/{ /jmp/s/.*/1:/ }' \
		-e '/\.p2align/d' \
		-e '}' \
		-e 's/DUMMY2/1/' $@
ifel_f_100.s: $(GENSRC)
	$(GENSRC) 0 'if (b < 0) a++; else a--;' 1 $N 0 0 0 1 0 >$*.c
	$(CC) $(CFLAGS) -S $*.c
	sed -i -e '/DUMMY1/,/DUMMY2/{' \
		-e '/addl/,/jmp/{ /jmp/s/\.L.*/1f/ }' \
		-e '/subl/,/jmp/{ /jmp/s/.*/1:/ }' \
		-e '/\.p2align/d' \
		-e '}' \
		-e 's/DUMMY2/1/' $@
call_0_10.c: $(GENSRC)
	$(GENSRC) 0 'func();' 0 $N 0 0 0 0 0 >$@
call_0_100.c: $(GENSRC)
	$(GENSRC) 0 'func();' 1 $N 0 0 0 0 0 >$@
call_1_10.c: $(GENSRC)
	$(GENSRC) 0 'func(a);' 0 $N 0 0 0 0 0 >$@
call_1_100.c: $(GENSRC)
	$(GENSRC) 0 'func(a);' 1 $N 0 0 0 0 0 >$@
call_2_10.c: $(GENSRC)
	$(GENSRC) 0 'func(a, a);' 0 $N 0 0 0 0 0 >$@
call_2_100.c: $(GENSRC)
	$(GENSRC) 0 'func(a, a);' 1 $N 0 0 0 0 0 >$@
call_3_10.c: $(GENSRC)
	$(GENSRC) 0 'func(a, a, a);' 0 $N 0 0 0 0 0 >$@
call_3_100.c: $(GENSRC)
	$(GENSRC) 0 'func(a, a, a);' 1 $N 0 0 0 0 0 >$@
call_4_10.c: $(GENSRC)
	$(GENSRC) 0 'func(a, a, a, a);' 0 $N 0 0 0 0 0 >$@
call_4_100.c: $(GENSRC)
	$(GENSRC) 0 'func(a, a, a, a);' 1 $N 0 0 0 0 0 >$@
call_5_10.c: $(GENSRC)
	$(GENSRC) 0 'func(a, a, a, a, a);' 0 $N 0 0 0 0 0 >$@
call_5_100.c: $(GENSRC)
	$(GENSRC) 0 'func(a, a, a, a, a);' 1 $N 0 0 0 0 0 >$@

movr_n_10: movr_n_10.s
	$(CC) $(CFLAGS) -o $@ $<
movr_n_100: movr_n_100.s
	$(CC) $(CFLAGS) -o $@ $<
movr_r_10: movr_r_10.s
	$(CC) $(CFLAGS) -o $@ $<
movr_r_100: movr_r_100.s
	$(CC) $(CFLAGS) -o $@ $<
movc_n_10: movc_n_10.s
	$(CC) $(CFLAGS) -o $@ $<
movc_n_100: movc_n_100.s
	$(CC) $(CFLAGS) -o $@ $<
addr_1_10: addr_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
addr_1_100: addr_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
addr_2_10: addr_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
addr_2_100: addr_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
addr_3_10: addr_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
addr_3_100: addr_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
addr_4_10: addr_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
addr_4_100: addr_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
addc_1_10: addc_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
addc_1_100: addc_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
addc_2_10: addc_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
addc_2_100: addc_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
addc_3_10: addc_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
addc_3_100: addc_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
addc_4_10: addc_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
addc_4_100: addc_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulr_1_10: mulr_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulr_1_100: mulr_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulr_2_10: mulr_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulr_2_100: mulr_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulr_3_10: mulr_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulr_3_100: mulr_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulr_4_10: mulr_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulr_4_100: mulr_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc2_1_10: mulc2_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc2_1_100: mulc2_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc2_2_10: mulc2_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc2_2_100: mulc2_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc2_3_10: mulc2_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc2_3_100: mulc2_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc2_4_10: mulc2_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc2_4_100: mulc2_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc4_1_10: mulc4_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc4_1_100: mulc4_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc4_2_10: mulc4_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc4_2_100: mulc4_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc4_3_10: mulc4_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc4_3_100: mulc4_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc4_4_10: mulc4_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc4_4_100: mulc4_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc5_1_10: mulc5_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc5_1_100: mulc5_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc5_2_10: mulc5_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc5_2_100: mulc5_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc5_3_10: mulc5_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc5_3_100: mulc5_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
mulc5_4_10: mulc5_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
mulc5_4_100: mulc5_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
divr_1_10: divr_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
divr_1_100: divr_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
divr_2_10: divr_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
divr_2_100: divr_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
divr_3_10: divr_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
divr_3_100: divr_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
divr_4_10: divr_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
divr_4_100: divr_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc2_1_10: divc2_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc2_1_100: divc2_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc2_2_10: divc2_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc2_2_100: divc2_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc2_3_10: divc2_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc2_3_100: divc2_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc2_4_10: divc2_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc2_4_100: divc2_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc4_1_10: divc4_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc4_1_100: divc4_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc4_2_10: divc4_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc4_2_100: divc4_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc4_3_10: divc4_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc4_3_100: divc4_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc4_4_10: divc4_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc4_4_100: divc4_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc5_1_10: divc5_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc5_1_100: divc5_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc5_2_10: divc5_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc5_2_100: divc5_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc5_3_10: divc5_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc5_3_100: divc5_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
divc5_4_10: divc5_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
divc5_4_100: divc5_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivr_1_10: udivr_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivr_1_100: udivr_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivr_2_10: udivr_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivr_2_100: udivr_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivr_3_10: udivr_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivr_3_100: udivr_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivr_4_10: udivr_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivr_4_100: udivr_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc2_1_10: udivc2_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc2_1_100: udivc2_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc2_2_10: udivc2_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc2_2_100: udivc2_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc2_3_10: udivc2_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc2_3_100: udivc2_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc2_4_10: udivc2_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc2_4_100: udivc2_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc4_1_10: udivc4_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc4_1_100: udivc4_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc4_2_10: udivc4_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc4_2_100: udivc4_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc4_3_10: udivc4_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc4_3_100: udivc4_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc4_4_10: udivc4_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc4_4_100: udivc4_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc5_1_10: udivc5_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc5_1_100: udivc5_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc5_2_10: udivc5_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc5_2_100: udivc5_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc5_3_10: udivc5_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc5_3_100: udivc5_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
udivc5_4_10: udivc5_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
udivc5_4_100: udivc5_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
mrch_1_10: mrch_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
mrch_1_100: mrch_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
mrch_2_10: mrch_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
mrch_2_100: mrch_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
mrch_3_10: mrch_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
mrch_3_100: mrch_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
mrch_4_10: mrch_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
mrch_4_100: mrch_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
mrcm_1_10: mrcm_1_10.c
	$(CC) $(CFLAGS) -o $@ $<
mrcm_1_100: mrcm_1_100.c
	$(CC) $(CFLAGS) -o $@ $<
mrcm_2_10: mrcm_2_10.c
	$(CC) $(CFLAGS) -o $@ $<
mrcm_2_100: mrcm_2_100.c
	$(CC) $(CFLAGS) -o $@ $<
mrcm_3_10: mrcm_3_10.c
	$(CC) $(CFLAGS) -o $@ $<
mrcm_3_100: mrcm_3_100.c
	$(CC) $(CFLAGS) -o $@ $<
mrcm_4_10: mrcm_4_10.c
	$(CC) $(CFLAGS) -o $@ $<
mrcm_4_100: mrcm_4_100.c
	$(CC) $(CFLAGS) -o $@ $<
mwch_10: mwch_10.c
	$(CC) $(CFLAGS) -o $@ $<
mwch_100: mwch_100.c
	$(CC) $(CFLAGS) -o $@ $<
mwcm_10: mwcm_10.c
	$(CC) $(CFLAGS) -o $@ $<
mwcm_100: mwcm_100.c
	$(CC) $(CFLAGS) -o $@ $<
if_t_10: if_t_10.s
	$(CC) $(CFLAGS) -o $@ $<
if_t_100: if_t_100.s
	$(CC) $(CFLAGS) -o $@ $<
if_f_10: if_f_10.s
	$(CC) $(CFLAGS) -o $@ $<
if_f_100: if_f_100.s
	$(CC) $(CFLAGS) -o $@ $<
ifel_t_10: ifel_t_10.s
	$(CC) $(CFLAGS) -o $@ $<
ifel_t_100: ifel_t_100.s
	$(CC) $(CFLAGS) -o $@ $<
ifel_f_10: ifel_f_10.s
	$(CC) $(CFLAGS) -o $@ $<
ifel_f_100: ifel_f_100.s
	$(CC) $(CFLAGS) -o $@ $<
call_0_10: call_0_10.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_0_100: call_0_100.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_1_10: call_1_10.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_1_100: call_1_100.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_2_10: call_2_10.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_2_100: call_2_100.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_3_10: call_3_10.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_3_100: call_3_100.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_4_10: call_4_10.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_4_100: call_4_100.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_5_10: call_5_10.c func.c
	$(CC) $(CFLAGS) -o $@ $^
call_5_100: call_5_100.c func.c
	$(CC) $(CFLAGS) -o $@ $^

time: $(TARGETS)
	@LANG=C date
	@for A in $(TARGETS); do echo -e "\\n$$A:"; time ./$$A; done
	@LANG=C date

clean:
	@rm -f $(C_SRC) $(S_SRC) $(TARGETS) *.o
