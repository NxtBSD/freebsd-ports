# Created by: Mark Reidel <ports@mark.reidel.info>

PORTNAME=	glurp
PORTVERSION=	0.12.3
PORTREVISION=	6
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	ports@mark.reidel.info
COMMENT=	Nice and clean GTK+-2.x based graphical client for musicpd

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libmpd.so:audio/libmpd

GNU_CONFIGURE=	yes
USES=		gmake gnome pkgconfig
USE_GNOME=	gtk20 glib20 libglade2
MAKE_ARGS+=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib -export-dynamic" \

.include <bsd.port.mk>
