PORTNAME=	openfortivpn
PORTVERSION=	1.17.2
DISTVERSIONPREFIX=	v
CATEGORIES=	security net-vpn

MAINTAINER=	ygy@FreeBSD.org
COMMENT=	Client for PPP+SSL VPN tunnel services

BUILD_DEPENDS=	gsed:textproc/gsed

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		autoreconf cpe pkgconfig ssl
CPE_VENDOR=	${PORTNAME}_project
USE_GITHUB=	yes
GH_ACCOUNT=	adrienverge

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_SED=${LOCALBASE}/bin/gsed \
		OPENSSL_CFLAGS=${OPENSSLINC} \
		OPENSSL_LIBS="-lssl -lcrypto"

.include <bsd.port.mk>
