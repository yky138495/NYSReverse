//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PropertyService <NSObject>
- (_Bool)deletePropertyRowByKey:(NSString *)arg1;
- (_Bool)updatePropertyRowValueByKey:(NSString *)arg1 andValue:(NSString *)arg2;
- (NSString *)propertyRowValueByKey:(NSString *)arg1;
- (_Bool)addRowToPropertyTableIfNotExistWithKey:(NSString *)arg1 andValue:(NSString *)arg2;
- (_Bool)addRowToPropertyTableWithKey:(NSString *)arg1 andValue:(NSString *)arg2;
- (_Bool)existRowInPropertyTable:(NSString *)arg1;
@end
