PORTNAME=	cirq-aqt
DISTVERSIONPREFIX=	v
DISTVERSION=	0.14.1
CATEGORIES=	science python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Cirq module to run on AQT quantum computers

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cirq-core>0:science/py-cirq-core@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.18:www/py-requests@${PY_FLAVOR}

USES=		python:3.8+
USE_PYTHON=	distutils autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	quantumlib
GH_PROJECT=	Cirq

WRKSRC_SUBDIR=	cirq-aqt

NO_ARCH=	yes

.include <bsd.port.mk>
