//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FDDatabaseLocalizeConverter, NSString;

@protocol FDDatabaseLocalizeConverterDelegate <NSObject>

@optional
- (void)databaseLocalizeConvertFailed:(FDDatabaseLocalizeConverter *)arg1 withErrorMessage:(NSString *)arg2;
- (void)databaseLocalizeConvertSucceed:(FDDatabaseLocalizeConverter *)arg1;
@end

