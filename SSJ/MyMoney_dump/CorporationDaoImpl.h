//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "CorporationDao.h"

@class NSString;

@interface CorporationDaoImpl : BaseDao <CorporationDao>
{
}

- (id)lastestTradeTimeByCorporationId:(long long)arg1;
- (id)oldestTradeTimeByCorporationId:(long long)arg1;
- (id)corporationExpenseTotalIncomeAndPayoutWithCurrencyCode:(id)arg1;
- (id)corporationExpenseVoWithId:(long long)arg1 currencyCode:(id)arg2;
- (id)corporationExpensesWithCurrencyCode:(id)arg1 onlyWithoutHidden:(_Bool)arg2 orderByLastUpdateTime:(_Bool)arg3;
- (id)listCreditorWithoutHidden;
- (id)listCorporationWithoutHidden;
- (_Bool)setCorporation:(long long)arg1 withHidden:(_Bool)arg2;
- (id)listOfReceivableCreditorsWithLocaleCode:(id)arg1;
- (id)listOfPayoutableCreditorsWithLocaleCode:(id)arg1;
- (_Bool)addToDeleteTableWithId:(long long)arg1;
- (_Bool)clearTransactionRelatedCorporationWithCorporationId:(long long)arg1;
- (_Bool)updateLastUpdateTimeWithCorporationId:(long long)arg1;
- (_Bool)deleteCorporation:(long long)arg1;
- (_Bool)existTransactionWithCorporationId:(long long)arg1;
- (id)creditorWithName:(id)arg1;
- (id)listCreditor;
- (id)listCorporationWithIds:(id)arg1;
- (id)listCorporation;
- (id)tradingEntityListWithType:(long long)arg1 corporationIds:(id)arg2;
- (id)tradingEntityListWithType:(long long)arg1;
- (id)corporationByName:(id)arg1;
- (id)corporationById:(long long)arg1;
- (_Bool)updateCorporation:(id)arg1;
- (long long)addCreditor:(id)arg1;
- (long long)addCorporation:(id)arg1;
- (long long)addCorporation:(id)arg1 withType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

