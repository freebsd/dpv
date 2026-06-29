OBJTOP		?= ${.OBJDIR:tA:H:H}
SRCTOP		?= ${.CURDIR:tA:H:H}
BINDIR		?= ${PREFIX:U/usr}/bin
LIBDIR		?= ${PREFIX:U/usr}/lib
INCLUDEDIR	?= ${PREFIX:U/usr}/include
MANDIR		?= ${PREFIX:U/usr}/share/man/man

CFLAGS		+= -I${LOCALBASE:U/usr/local}/include
CFLAGS		+= -I${LOCALBASE:U/usr/local}/include/cdialog
LDFLAGS		+= -L${LOCALBASE:U/usr/local}/lib

_LDIALOG	 = -lcdialog
_LDPV		 = -L${OBJTOP}/lib/libdpv -ldpv
_LFIGPAR	 = -L${OBJTOP}/lib/libfigpar -lfigpar
