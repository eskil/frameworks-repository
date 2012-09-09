Do not create subdirectores (eg Cells Classes) etc and put files there.

During install, in debug, headers keep the path;
./app/Build/Products/Debug-iphonesimulator/BKit.framework/Versions/A/Headers/ViewControllers/BKViewController.h

But archiving does not;
./app/Build/Intermediates/ArchiveIntermediates/App/IntermediateBuildFilesPath/UninstalledProducts/BKit.framework/Versions/A/Headers/BKViewController.h

This means BKit.h cannot include the files using either or.
