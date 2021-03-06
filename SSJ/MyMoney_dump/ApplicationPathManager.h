//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ApplicationPathManager : NSObject
{
    long long _typeOfDatabase;
    NSString *_usingDataSuiteName;
    NSString *_usingDataSuiteDir;
}

+ (id)manager;
@property(copy, nonatomic) NSString *usingDataSuiteName; // @synthesize usingDataSuiteName=_usingDataSuiteName;
@property(copy, nonatomic) NSString *usingDataSuiteDir; // @synthesize usingDataSuiteDir=_usingDataSuiteDir;
- (void).cxx_destruct;
- (void)creatJailbreakPerDirIfNeed;
- (id)thumbnailDirectoryForAccountBookVo:(id)arg1;
- (id)currentAccountBookThumbnailDirectory;
- (id)remoteAccountBookVosBaseDirectory:(id)arg1;
- (id)accountBookVoDirectoryPath:(id)arg1;
- (id)transactionPhotoDirectoryForAccountBookVo:(id)arg1;
- (id)coverDirectoryForAccountBookVo:(id)arg1;
- (id)applicationAccountBookCoverAlbumDirectory;
- (id)currentAccountBookCoverDirectory;
- (id)taobaoLogPath;
- (id)avatarsDirectoryPath;
- (id)shareImagePath;
- (id)messageCenterIconDirectory;
- (id)messageCenterImagesDirectory;
- (id)billMailboxImportHisFilePath;
- (id)billMailboxFilePath;
- (id)networkDiskConfigFilePath;
- (id)remindAnalysisFilePath;
- (id)remindConfigFilePath;
- (id)localAccountBookConfigFilePath;
- (id)signInAccountBookConfigFilePath;
- (id)accountBookConfigFilePath;
- (id)dataSuiteConfigFilePath;
- (id)syncDSNewFilePathAtHome:(id)arg1;
- (id)applicationSyncDSNewFile;
- (id)syncDSOldEmptyFilePathAtHome:(id)arg1;
- (id)applicationSyncDSOldEmptyFile;
- (id)syncDSOldFilePathAtHome:(id)arg1;
- (id)applicationSyncDSOldFile;
- (id)syncDSPathAtHome:(id)arg1;
- (id)applicationSyncDSDirectory;
- (id)applicationLogFile;
- (id)sqliteFilePathAtHome:(id)arg1;
- (id)applicationDocumentsSQLiteFile;
- (id)applicationGlobalSQLiteFile;
- (id)applicationSQLiteFile;
- (id)applicationSQLiteFileWithWorkingDirectory:(id)arg1;
- (id)applicationAccountBookTemplateDirectory;
- (id)applicationBackupEncryptDirectory;
- (id)applicationRestoreDirectory;
- (id)applicationBackupDirectory;
- (id)transactionPhotoDirectory;
- (id)splashConfigHasIntervalFile;
- (id)splashReportFailedLogFile;
- (id)splashConfigFile;
- (id)applicationSplashDirectory;
- (id)applicationLocalAccountBooksDirectory;
- (id)applicationAccountBooksDirectory;
- (id)applicationResourcesDirectory;
- (id)applicationRealDocumentsPath;
- (id)applicationWorkingDirectory;
- (id)applicationBaseDirectory;
- (_Bool)pngFileExistsInBundle:(id)arg1;
- (_Bool)isDemoDatabase;
- (void)useDemoDatabase;
- (void)useDefaultDatabase;

@end

