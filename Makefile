# Copyright (c) 2010 by Wayne C. Gramlich.
# All rights reserved.

EZCC := ../easyc/ezcc.ez

CV_FILES :=		\
    CV.ezc		\
    CV_C.c		\
    CV_C.h		\
    High_GUI.ezc	\
    High_GUI_C.c	\
    High_GUI_C.h

PROGRAMS :=	\
    Example1	\
    Example2	\
    Example3

all: ${PROGRAMS}

Example1: Example1.ezc ${CV_FILES}
	$(EZCC) -d $@

Example2: Example2.ezc ${CV_FILES}
	$(EZCC) -d $@

Example3: Example3.ezc ${CV_FILES}
	$(EZCC) -d $@

clean:
	for i in ${PROGRAMS} ; do \
	    rm -f $$i.c $$i.h $$i.o $$i ; \
	    done
	rm -f ${PROGRAMS}
	rm -f CV.c CV.ezg CV.h CV.o CV.ezc~
	rm -f CV_C.o CV_C.c~ CV_C.h~
	rm -f Easy_C.c Easy_C.h Easy_C.o Easy_C.ezg
	rm -f Easy_C_C.o
	rm -f High_GUI.c High_GUI.ezg High_GUI.h High_GUI.o High_GUI.ezc~
	rm -f High_GUI_C.o High_GUI_C.c~ High_GUI_C.h~
	rm -f Math.c Math.h Math.o
	rm -f Makefile~

