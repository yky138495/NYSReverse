//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FDStatisticInfoPushService : NSObject
{
}

+ (id)sharedInstance;
- (void)pushStatisticsForSharingOutAccountBookWithUsername:(id)arg1 andSyncAccountBookID:(id)arg2 andShareCode:(id)arg3 andChannleName:(id)arg4;
- (void)pushStatisticsForShareAccountBookDownloadWithUsername:(id)arg1 andStep:(long long)arg2 andIsFirstInstall:(_Bool)arg3 andStatisticInfo:(id)arg4;
- (void)pushStatisticsForAppLaunchedBySharedAccountBookClickingWithStatisticInfo:(id)arg1;
- (id)init;

@end
