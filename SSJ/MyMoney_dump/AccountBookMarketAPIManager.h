//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AccountBookMarketAPIManager : NSObject
{
}

+ (void)callParamsCheckFailedBlock:(CDUnknownBlockType)arg1;
+ (void)sendRequestWithParams:(id)arg1 opt:(id)arg2 uriString:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)reportMarketDownloadHistoryForCurrentAccountWithTemplateID:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)queryMarketDownloadHistoryForCurrentAccountCallback:(CDUnknownBlockType)arg1;
+ (void)reportMarketDownloadHistoryForAccount:(id)arg1 password:(id)arg2 templateID:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)queryMarketDownloadHistoryForAccount:(id)arg1 password:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)queryTemplateDetailInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)queryMarketInfoWithCallback:(CDUnknownBlockType)arg1;

@end

