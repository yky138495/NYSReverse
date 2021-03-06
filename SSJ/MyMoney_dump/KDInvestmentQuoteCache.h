//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface KDInvestmentQuoteCache : NSObject
{
    NSDictionary *_indexQuoteDictionary;
    NSDictionary *_fundQuoteDictionary;
    NSDictionary *_stockQuoteDictionary;
}

+ (id)getQuoteCacheFilePath;
+ (void)unarchiveFromFile;
+ (void)archiveToFile;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *stockQuoteDictionary; // @synthesize stockQuoteDictionary=_stockQuoteDictionary;
@property(retain, nonatomic) NSDictionary *fundQuoteDictionary; // @synthesize fundQuoteDictionary=_fundQuoteDictionary;
@property(retain, nonatomic) NSDictionary *indexQuoteDictionary; // @synthesize indexQuoteDictionary=_indexQuoteDictionary;
- (void).cxx_destruct;
- (void)dealloc;

@end

