PORTNAME=	cf
PORTVERSION=	6.49.0
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	dumbbell@FreeBSD.org
COMMENT=	CLI for Cloud Foundry written in Go

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/bin/go-bindata:devel/go-bindata

USE_GITHUB=	yes
GH_ACCOUNT=	cloudfoundry
GH_PROJECT=	cli

USES=		go

CONFLICTS_INSTALL=	lbl-cf # bin/cf

GO_BUILDFLAGS=	-ldflags="-X code.cloudfoundry.org/cli/version.binaryVersion=${PORTVERSION}"
GO_PKGNAME=	code.cloudfoundry.org/cli
GO_TARGET=	:cf

PLIST_FILES=	bin/cf

PORTDOCS=	NOTICE README.md

OPTIONS_DEFINE=	DOCS

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for x in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${x} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
