//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, SuperTransactionTemplate;

@interface SuperTzRecordCollector : NSObject
{
    SuperTransactionTemplate *_rawTemplate;
    NSArray *_accounts;
    NSArray *_categories;
    NSArray *_corps;
    NSArray *_projects;
    NSArray *_members;
    NSArray *_transactionTypes;
    NSString *_memo;
    long long _refreshType;
    NSDictionary *_currentTimeSpan;
}

+ (id)timespanFromPeriodType:(long long)arg1;
+ (id)filterStringFromPeriodType:(long long)arg1;
+ (id)userDefinedTemplates;
@property(retain, nonatomic) NSDictionary *currentTimeSpan; // @synthesize currentTimeSpan=_currentTimeSpan;
@property(nonatomic) long long refreshType; // @synthesize refreshType=_refreshType;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSArray *transactionTypes; // @synthesize transactionTypes=_transactionTypes;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) NSArray *projects; // @synthesize projects=_projects;
@property(retain, nonatomic) NSArray *corps; // @synthesize corps=_corps;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) SuperTransactionTemplate *rawTemplate; // @synthesize rawTemplate=_rawTemplate;
- (void).cxx_destruct;
- (id)textForPullRefreshByTimeInterval:(double)arg1 refreshTextType:(long long)arg2;
- (id)textForPullUpRefresh;
- (id)textForPullDownRefresh;
- (id)filterNonEmptyProjects:(_Bool)arg1;
- (id)filterNonEmptyMembers:(_Bool)arg1;
- (id)filterNonEmptyCorps:(_Bool)arg1;
- (id)filterNonEmptyTransactionType;
- (id)filterNonEmptyCategories;
- (id)filterNonEmptyAccounts;
- (id)dateForPullUpRefresh;
- (id)dateForPullDownRefresh;
- (id)dateForTimeSpan;
- (id)generateCustomizedTimeSpanForRefresh;
- (id)generateCurrentTimeSpan;
- (id)splitDataComponents:(id)arg1;
- (_Bool)isEqualToAll:(id)arg1;
- (id)initWithTemplate:(id)arg1;

@end
