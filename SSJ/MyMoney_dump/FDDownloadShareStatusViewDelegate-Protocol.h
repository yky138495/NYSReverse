//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FDAccountBookSeed, FDDownloadShareStatusView;

@protocol FDDownloadShareStatusViewDelegate <NSObject>
- (void)statusView:(FDDownloadShareStatusView *)arg1 retryDownload:(FDAccountBookSeed *)arg2;
- (void)statusView:(FDDownloadShareStatusView *)arg1 cancelDownload:(FDAccountBookSeed *)arg2;
@end
