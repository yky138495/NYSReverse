//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "FundHoldingDao.h"

@class NSString;

@interface FundHoldingDaoImpl : BaseDao <FundHoldingDao>
{
}

- (id)holdingIdsWithFundCodes:(id)arg1;
- (long long)holdingIdForFund:(id)arg1 code:(id)arg2;
- (id)holdingWithId:(long long)arg1;
- (id)holdingsWithIds:(id)arg1;
- (id)allHoldings;
- (long long)insertFundHolding:(id)arg1 intoDeletedTable:(_Bool)arg2;
- (id)insertFundHoldings:(id)arg1;
- (id)createSqlForInsertFundHoldings:(id)arg1 withIds:(id)arg2;
- (_Bool)deleteFromFundHolding:(long long)arg1;
- (_Bool)deleteFundHolding:(long long)arg1;
- (_Bool)updateFundHolding:(id)arg1;
- (_Bool)updateFundHoldings:(id)arg1;
- (long long)insertFundHolding:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
