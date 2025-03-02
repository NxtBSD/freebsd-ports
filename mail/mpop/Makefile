# Created by: Sylvio Cesar <sylvio@FreeBSD.org>

PORTNAME=	mpop
DISTVERSION=	1.4.15
PORTREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	https://marlam.de/mpop/releases/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small and fast POP3 client

LICENSE=	GPLv3+

USES=		cpe gettext gmake makeinfo pkgconfig tar:xz
CPE_VENDOR=	martin_lambers
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-tls=no
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

INFO=		mpop

OPTIONS_DEFINE=		GSASL IDN LIBSECRET
OPTIONS_RADIO=		TLS
OPTIONS_RADIO_TLS=	GNUTLS LIBTLS OPENSSL
OPTIONS_DEFAULT=	GNUTLS IDN
OPTIONS_SUB=		yes

GNUTLS_LIB_DEPENDS=		libgnutls.so:security/gnutls
GNUTLS_CONFIGURE_ON=		--with-tls=gnutls
GSASL_DESC=			${SASL_DESC} via GNU SASL
GSASL_LIB_DEPENDS=		libgsasl.so:security/libgsasl
GSASL_CONFIGURE_WITH=		libgsasl
IDN_LIB_DEPENDS=		libidn2.so:dns/libidn2
IDN_CONFIGURE_WITH=		libidn
LIBSECRET_DESC=			GNOME password management
LIBSECRET_LIB_DEPENDS=		libsecret-1.so:security/libsecret
LIBSECRET_CONFIGURE_WITH=	libsecret
LIBTLS_DESC=			SSL/TLS support via libtls
LIBTLS_LIB_DEPENDS=		libtls.so:security/${"${SSL_DEFAULT:Mlibressl*}":?libressl:libretls}
LIBTLS_CONFIGURE_ON=		--with-tls=libtls
OPENSSL_USES=			ssl
OPENSSL_CONFIGURE_ENV=		${OPENSSLINC:M/usr/include:C,.+,libssl_CFLAGS=" ",} \
				${OPENSSLLIB:M/usr/lib:C,.+,libssl_LIBS="-lssl -lcrypto",}
OPENSSL_CONFIGURE_ON=		--with-tls=openssl

post-patch:
	@${REINPLACE_CMD} -Ee 's/Debian/${OPSYS}/' \
		-e 's,/etc/ssl/certs,${LOCALBASE}/share/certs,' \
		-e '/crt/s/ca(\\?)-certificates/ca\1-root\1-nss/' \
		-e 's/ca\\?-certificates/ca_root_nss/' \
		${WRKSRC}/doc/mpop*

.include <bsd.port.mk>
