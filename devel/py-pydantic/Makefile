PORTNAME=	pydantic
DISTVERSION=	1.8.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Data validation and settings management using python 3.6 type hinting

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}typing-extensions>=3.7.4.3:devel/py-typing-extensions@${PY_FLAVOR}

USES=		cpe python:3.7+
USE_PYTHON=	distutils cython autoplist
CPE_VENDOR=	pydantic_project

.include <bsd.port.mk>
