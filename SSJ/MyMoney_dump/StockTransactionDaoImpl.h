//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "StockTransactionDao.h"

@class NSString;

@interface StockTransactionDaoImpl : BaseDao <StockTransactionDao>
{
}

- (id)getStockTransIDDictionary;
- (long long)insertStockTransaction:(id)arg1 intoDeletedTable:(_Bool)arg2;
- (id)insertStockTransactions:(id)arg1;
- (id)transactionWithFID:(long long)arg1;
- (id)stockTransactionsByTransactionIds:(id)arg1;
- (void)updateStockTransaction:(id)arg1;
- (_Bool)deleteFromStockTrans:(long long)arg1;
- (_Bool)deleteStockWithID:(long long)arg1;
- (id)transactionsWithHoldingId:(long long)arg1;
- (long long)insertStockTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

