//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FinanceWalletRequestManager : NSObject
{
}

+ (id)requestWithMethod:(id)arg1 param:(id)arg2 urlString:(id)arg3;
+ (void)postRequestForCloseNoticeWithNoticeId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)postRequestRequestForShowMoneyFlag:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (void)postRequestRequestForSummary:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)headForRequestParameters;

@end

