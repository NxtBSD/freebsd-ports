PORTNAME=	barvinok
DISTVERSION=	0.41.5
PORTREVISION=	1
CATEGORIES=	math
MASTER_SITES=	https://barvinok.sourceforge.io/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Library for counting the number of integer points in polytopes

LICENSE=	GPLv2

FETCH_DEPENDS=	git:devel/git
LIB_DEPENDS=	libglpk.so:math/glpk \
		libgmp.so:math/gmp \
		libisl.so:devel/isl \
		libntl.so:math/ntl \
		libpolylibgmp.so:math/polylib

USES=		compiler:c11 gmake libtool localbase:ldflags pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static --enable-shared --enable-shared-barvinok \
		--with-gmp=system --with-polylib=system --with-isl=system
USE_LDCONFIG=	yes

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
