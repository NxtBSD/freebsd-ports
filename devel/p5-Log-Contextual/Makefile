PORTNAME=	Log-Contextual
PORTVERSION=	0.008001
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for simple logging interface with a contextual log

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Data-Dumper-Concise>0:devel/p5-Data-Dumper-Concise \
	p5-Exporter-Declare>=0.111:devel/p5-Exporter-Declare \
	p5-Moo>=1.003:devel/p5-Moo
TEST_DEPENDS=	p5-Log-Log4perl>0:devel/p5-Log-Log4perl

USES=	perl5
USE_PERL5=	configure
NO_ARCH=	YES

.include <bsd.port.mk>
