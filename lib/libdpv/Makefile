LIB=		dpv
SHLIB_MAJOR=	3
INCS=		dpv.h
MAN=		dpv.3
MLINKS=		dpv.3 dpv_free.3

SRCS=		dialog_util.c dialogrc.c dprompt.c dpv.c status.c util.c

CFLAGS+=	-I${.CURDIR}
CFLAGS+=	-I${SRCTOP}/lib/libfigpar

LDADD=		${_LDIALOG} ${_LFIGPAR} -lutil -ltinfow -lncursesw

.include <bsd.lib.mk>
