# Created by: Stephen Montgomery-Smith <stephen@FreeBSD.org>

PORTNAME=	octave-forge-doctest
PORTVERSION=	0.7.0
PORTREVISION=	4
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKDIR}/${OCTSRC}/COPYING

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${DISTNAME}

WRKSRC=		${WRKDIR}/${OCTSRC}/src

.include "${.CURDIR}/../../Mk/bsd.octave.mk"

do-build:
	@${DO_NADA}

NO_ARCH=	yes

post-build:
	${RM} ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
