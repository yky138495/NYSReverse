//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter;

@interface TransactionRecordViewModel : NSObject
{
    NSDateFormatter *_yyyyMMddDateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *yyyyMMddDateFormatter; // @synthesize yyyyMMddDateFormatter=_yyyyMMddDateFormatter;
- (void).cxx_destruct;
- (id)assembleTreeRecordByTransactions:(id)arg1 withSummary:(_Bool)arg2;
- (id)assembleTreeRecordWithDailySummaryEmptyByTransactions:(id)arg1;
- (id)allRecordBetween:(double)arg1 and:(double)arg2;

@end

