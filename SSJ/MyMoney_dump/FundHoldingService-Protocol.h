//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FundHolding, NSArray, NSDictionary;

@protocol FundHoldingService <NSObject>
- (NSDictionary *)holdingIdsWithFundCodes:(NSArray *)arg1;
- (void)deleteHoldingWithId:(long long)arg1;
- (NSDictionary *)holdingsWithIds:(NSArray *)arg1;
- (FundHolding *)holdingWithId:(long long)arg1;
- (NSArray *)allHoldings;
@end

