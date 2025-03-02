# Created by: Muhammad Moinur Rahman <bofh@FreeBSD.org>

PORTNAME=	pgroonga
PORTVERSION=	2.3.6
CATEGORIES=	databases textproc
MASTER_SITES=	http://packages.groonga.org/source/pgroonga/

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Open-source fulltext search engine for PostGRESQL

LICENSE=	PostgreSQL
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgroonga.so:textproc/groonga

USES=		gmake localbase pgsql:10.0+ pkgconfig

CPPFLAGS+=	-I${LOCALBASE}/include/groonga
LLD_UNSAFE=	yes
SUB_FILES=	pkg-message
PLIST_SUB=	MVER=${PORTVERSION}

OPTIONS_DEFINE=		MECAB
MECAB_DESC=		Use MeCab as a tokenizer
MECAB_BUILD_DEPENDS=	mecab-ipadics>=0.996:japanese/mecab-ipadic

.include <bsd.port.pre.mk>
# With PG11+ some scripts are only installed when they are common to
# all PG versions.
.if ${PGSQL_VER:R} < 11
PLIST_SUB+=	OLDPG="@comment "
.else
PLIST_SUB+=	OLDPG=""
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/pgroonga.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/pgroonga_check.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/pgroonga_crash_safer.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/pgroonga_database.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/pgroonga_wal_applier.so

.include <bsd.port.post.mk>
