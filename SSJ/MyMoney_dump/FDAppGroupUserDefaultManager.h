//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults;

@interface FDAppGroupUserDefaultManager : NSObject
{
    NSUserDefaults *_groupSharedUserDefault;
}

+ (id)pathForSummaryTransactionsFile;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)summaryDictionary;
- (void)setSummaryDictionary:(id)arg1;
- (id)summaryTransactions;
- (void)setSummaryTransations:(id)arg1;
- (id)init;

@end
