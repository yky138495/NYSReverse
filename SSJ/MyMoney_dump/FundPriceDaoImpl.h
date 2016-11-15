//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "FundPriceDao.h"

@class NSString;

@interface FundPriceDaoImpl : BaseDao <FundPriceDao>
{
}

- (id)historyPricesWithFundCode:(id)arg1;
- (_Bool)deleteHistoryPricesWithFundCode:(id)arg1 before:(double)arg2;
- (_Bool)insertPriceHistory:(id)arg1;
- (_Bool)updatePrice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

