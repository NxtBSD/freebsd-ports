--- chrome/browser/profiles/chrome_browser_main_extra_parts_profiles.cc.orig	2022-03-25 21:59:56 UTC
+++ chrome/browser/profiles/chrome_browser_main_extra_parts_profiles.cc
@@ -393,7 +393,7 @@ void ChromeBrowserMainExtraPartsProfiles::
 #endif
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD) || \
     (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS))
   metrics::DesktopProfileSessionDurationsServiceFactory::GetInstance();
 #endif
