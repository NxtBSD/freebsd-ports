--- ui/base/resource/resource_bundle.cc.orig	2022-03-25 21:59:56 UTC
+++ ui/base/resource/resource_bundle.cc
@@ -878,7 +878,7 @@ void ResourceBundle::ReloadFonts() {
 }
 
 ResourceScaleFactor ResourceBundle::GetMaxResourceScaleFactor() const {
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return max_scale_factor_;
 #else
   return GetSupportedResourceScaleFactors().back();
