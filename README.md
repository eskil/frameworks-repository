frameworks-repository
=====================

Example XCode workspace with a c++ lib, a framework and an app that
uses those.

This uses https://github.com/kstenerud/iOS-Universal-Framework and
demos a setup in which you can have multiple apps that share a c++
library and a framework. Both app and framework use the library, and
the framework can include resources likes nibs.


note:
=====

Under BKit, do not create subdirectores (eg Cells Classes etc) and put files there. As tempting as that may be.

During install, in debug, headers keep the path;

./app/Build/Products/Debug-iphonesimulator/BKit.framework/Versions/A/Headers/ViewControllers/BKViewController.h

But archiving does not;

./app/Build/Intermediates/ArchiveIntermediates/App/IntermediateBuildFilesPath/UninstalledProducts/BKit.framework/Versions/A/Headers/BKViewController.h

This means BKit.h cannot include the files using either or. This is
however one of those things where it'll work sometime and sometimes
now due to xcode turning with the wind.
