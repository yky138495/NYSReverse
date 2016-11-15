//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TransactionTypeSettingDataManager : NSObject
{
    NSArray *_orderedTzTypes;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *orderedTzTypes; // @synthesize orderedTzTypes=_orderedTzTypes;
- (void).cxx_destruct;
- (id)loadAccountBookSelectedTzTypeRecords;
- (id)loadSelectedTzTypeRecords;
- (id)getOrderedTzTypesFromUserDefault;
- (id)fdTransactionTypesDictionary;
- (id)defaultOrderedTzTypesInNumber;
- (id)defaultOrderedTzTypesInString;
- (id)tzTypeToString:(long long *)arg1;
- (id)convertTzTypesStringToArray:(id)arg1;
- (id)convertTzTypesArrayToString:(id)arg1;
- (_Bool)setOrderedTzTypesIntoDatabase:(id)arg1;
- (id)getOrderedTzTypesFromDatabase;
- (_Bool)isTzTypesValid:(id)arg1;
- (void)clearOrderedTzTypes;
- (void)setDefaultOrderedTzTypes;
- (id)getOrderedTzTypes;

@end

