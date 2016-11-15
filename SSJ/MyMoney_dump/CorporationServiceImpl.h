//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CorporationService.h"

@class NSString;

@interface CorporationServiceImpl : NSObject <CorporationService>
{
}

- (id)lastestTradeTimeByCorporationId:(long long)arg1;
- (id)oldestTradeTimeByCorporationId:(long long)arg1;
- (id)corporationExpenseTotalIncomeAndPayoutInfo;
- (id)corporationExpensesWithoutHiddenOrderByLastUpdateTime;
- (id)corporationExpensesOrderByLastUpdateTime;
- (id)corporationExpensesWithoutHidden;
- (id)corporationExpenses;
- (id)corporationExpenseVoWithId:(long long)arg1;
- (_Bool)setCorporation:(long long)arg1 withHidden:(_Bool)arg2;
- (id)listOfLendCenterCreditors;
- (id)corporationByName:(id)arg1;
- (id)corporationById:(long long)arg1;
- (id)creditorWithName:(id)arg1;
- (id)listCreditorWithoutHidden;
- (id)listCreditor;
- (id)listCorporationWithCorporationIds:(id)arg1;
- (id)listCorporationWithoutHidden;
- (id)listCorporation;
- (_Bool)existTransactionWithCorporationId:(long long)arg1;
- (_Bool)deleteCreditor:(long long)arg1 error:(id *)arg2;
- (_Bool)deleteCorporation:(long long)arg1 error:(id *)arg2;
- (void)updateCreditorOrders:(id)arg1;
- (void)updateCorporationOrders:(id)arg1;
- (_Bool)updateCreditorName:(id)arg1 byId:(long long)arg2;
- (_Bool)updateCorporationName:(id)arg1 byId:(long long)arg2;
- (long long)addCreditor:(id)arg1;
- (long long)addCorporation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
