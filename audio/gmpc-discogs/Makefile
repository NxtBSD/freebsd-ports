# Created by: Martin Wilke <miwi@FreeBSD.org>

PORTNAME=	gmpc-discogs
PORTVERSION=	0.20.0
PORTREVISION=	8
CATEGORIES=	audio
MASTER_SITES=	http://download.sarine.nl/Programs/gmpc/${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Album Image fetcher for gmpc

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libmpd.so:audio/libmpd
BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gmpc.pc:audio/gmpc
RUN_DEPENDS=	gmpc:audio/gmpc

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
USES=		gettext gmake gnome libtool pkgconfig
USE_GNOME=	glib20 gtk20 intltool libxml2
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
