PORTNAME=	mat2
DISTVERSION=	0.12.3
PORTREVISION=	1
CATEGORIES=	multimedia audio graphics textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fuz@fuz.su
COMMENT=	Handy tool to trash your metadata

LICENSE=	LGPL3+

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mutagen>0:audio/py-mutagen@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}gobject3>0:devel/py-gobject3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cairo>0:graphics/py-cairo@${PY_FLAVOR} \
		librsvg2-rust>0:graphics/librsvg2-rust \
		gdk-pixbuf2>0:graphics/gdk-pixbuf2 \
		poppler-glib>0:graphics/poppler-glib

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

OPTIONS_DEFINE=	FFMPEG EXIFTOOL
OPTIONS_DEFAULT=	FFMPEG EXIFTOOL
EXIFTOOL_DESC=	EXIF metadata support via p5-Image-ExifTool
EXIFTOOL_RUN_DEPENDS=	exiftool:graphics/p5-Image-ExifTool
FFMPEG_RUN_DEPENDS=	ffmpeg:multimedia/ffmpeg

.include <bsd.port.mk>
