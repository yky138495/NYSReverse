//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FinanceMarketProductRequestApi : NSObject
{
}

+ (id)getCacheJsonDataWithURL:(id)arg1;
+ (void)storeCacheJsonDataWithURL:(id)arg1 jsonData:(id)arg2;
+ (id)loadNoticeData;
+ (id)loadBottomCellDatasCache;
+ (id)loadHeadrSegmentModelsCache;
+ (id)loadHeaderIconModelsCache;
+ (id)loadproductListModelCache;
+ (id)productNoticeTransactionWithJosnObj:(id)arg1;
+ (id)bottomCellDatasTransactionWithJosnObj:(id)arg1;
+ (id)headerSegmentModelsTransactionWithJsonObj:(id)arg1;
+ (id)headerIconModelsTransactionWithJsonObj:(id)arg1;
+ (id)productListModelTransactionWithJsonObj:(id)arg1 andStartTime:(id)arg2;
+ (id)defaultHead;
+ (id)requestWithParam:(id)arg1 urlString:(id)arg2;
+ (id)requestFinanceMarketNoticesWithResultBlock:(CDUnknownBlockType)arg1;
+ (id)requestFinanceMarketBottomCellDataWithResultBlock:(CDUnknownBlockType)arg1;
+ (id)requestFinanceMarketSegmentIndexDataWithResultBlock:(CDUnknownBlockType)arg1;
+ (id)requestFinanceMarketHeaderIconDataWithResultBlock:(CDUnknownBlockType)arg1;
+ (id)requestFinanceMarketDataWith:(long long)arg1 CurrentPage:(long long)arg2 resultBlock:(CDUnknownBlockType)arg3;

@end
