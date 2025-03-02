# Created by: roam@FreeBSD.org

PORTNAME=	c-ares
PORTVERSION=	1.18.1
CATEGORIES=	dns
MASTER_SITES=	https://c-ares.org/download/ \
		https://c-ares.haxx.se/download/ \
		ZI

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Asynchronous DNS resolver library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-werror
INSTALL_TARGET=	install-strip
SSP_UNSAFE=	Refuses -l in LDFLAGS
USES=		libtool pathfix compiler:c++11-lang gmake
USE_LDCONFIG=	yes

PROGRAMS=	acountry adig ahost

OPTIONS_DEFINE=		CONFIG_INFO DEBUG HIDE_SYMBOLS OPTIMIZED_CFLAGS
OPTIONS_DEFAULT=	CONFIG_INFO HIDE_SYMBOLS

CONFIG_INFO_DESC=	Add the ares_config_info patch
HIDE_SYMBOLS_DESC=	Hide internal library symbols
OPTIMIZED_CFLAGS_DESC=	Build with compiler optimizations

CONFLICTS=		py*-ripe.atlas.tools

MAKE_JOBS_UNSAFE=	yes

CONFIG_INFO_EXTRA_PATCHES=	${FILESDIR}/ares-config-info.patch
DEBUG_CONFIGURE_ENABLE=	debug
HIDE_SYMBOLS_CONFIGURE_ENABLE=	symbol-hiding
OPTIMIZED_CFLAGS_CONFIGURE_ENABLE=	optimize

post-install:
	${INSTALL_PROGRAM} ${PROGRAMS:S@^@${WRKSRC}/src/tools/.libs/@} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
