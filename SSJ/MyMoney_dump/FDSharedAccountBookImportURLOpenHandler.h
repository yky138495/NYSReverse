//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FDDownloadManagerDelegate.h"
#import "FDDownloadShareStatusViewDelegate.h"
#import "FDSharedAccountBookImportManagerDelegate.h"

@class FDDownloadShareStatusView, FDShareAccountBookStatisticInfo, FDSharedAccountBookDownloader, FDSharedAccountBookImportManager, NSString, UIWindow;

@interface FDSharedAccountBookImportURLOpenHandler : NSObject <FDSharedAccountBookImportManagerDelegate, FDDownloadShareStatusViewDelegate, FDDownloadManagerDelegate>
{
    id <FDSharedAccountBookImportURLOpenHandlerDelegate> _delegate;
    FDDownloadShareStatusView *_progressStatusView;
    FDSharedAccountBookDownloader *_downloader;
    FDSharedAccountBookImportManager *_importManager;
    FDShareAccountBookStatisticInfo *_statisticInfo;
    UIWindow *_topWindow;
}

@property(retain, nonatomic) UIWindow *topWindow; // @synthesize topWindow=_topWindow;
@property(retain, nonatomic) FDShareAccountBookStatisticInfo *statisticInfo; // @synthesize statisticInfo=_statisticInfo;
@property(retain, nonatomic) FDSharedAccountBookImportManager *importManager; // @synthesize importManager=_importManager;
@property(retain, nonatomic) FDSharedAccountBookDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) FDDownloadShareStatusView *progressStatusView; // @synthesize progressStatusView=_progressStatusView;
@property(nonatomic) __weak id <FDSharedAccountBookImportURLOpenHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)subscribeCurrentShareAccountBookUpdate;
- (void)sendStaticWithStep:(long long)arg1;
- (void)showAlertMessage:(id)arg1;
- (void)showAccountBookDynamicViewController;
- (void)showAccountBookFeedForOldSideslip;
- (void)showAccountBookFeedForNewSideslip;
- (void)showAccountBookFeed;
- (void)fetchExchangeQuotes;
- (void)downloadManager:(id)arg1 task:(id)arg2 didReceivedData:(unsigned long long)arg3 totalByteLength:(unsigned long long)arg4;
- (void)downloadManager:(id)arg1 taskDidStopped:(id)arg2;
- (void)downloadManager:(id)arg1 taskDidFinished:(id)arg2;
- (void)statusView:(id)arg1 retryDownload:(id)arg2;
- (void)statusView:(id)arg1 cancelDownload:(id)arg2;
- (void)shareAccountBookImportFailed:(id)arg1 withErrorMessage:(id)arg2;
- (void)shareAccountBookImportSucceed:(id)arg1 withAccountBookVo:(id)arg2;
- (void)handleAccountBookImportWithAccountBookSeedURL:(id)arg1 andDecryptKey:(id)arg2 andStatisticInfo:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

