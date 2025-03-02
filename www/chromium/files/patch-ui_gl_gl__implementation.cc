--- ui/gl/gl_implementation.cc.orig	2022-03-25 21:59:56 UTC
+++ ui/gl/gl_implementation.cc
@@ -294,7 +294,7 @@ GLImplementationParts GetSoftwareGLImplementation() {
 
 GLImplementationParts GetSoftwareGLImplementationForPlatform() {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   return GetSoftwareGLImplementation();
 #else
   return GetLegacySoftwareGLImplementation();
