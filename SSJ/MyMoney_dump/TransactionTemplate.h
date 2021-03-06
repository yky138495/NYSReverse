//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSyncXml.h"

@class KDAccount, KDCategory, NSDecimalNumber, NSString, SubjectItem, Tag, TradingEntity;

@interface TransactionTemplate : BaseSyncXml
{
    long long _oid;
    double _createdTime;
    double _modifiedTime;
    double _lastUpdateTime;
    NSString *_memo;
    NSString *_templateName;
    KDAccount *_sellerAccount;
    TradingEntity *_relationUnit;
    KDAccount *_buyerAccount;
    SubjectItem *_subject;
    Tag *_project;
    Tag *_member;
    _Bool _isDeleted;
    long long _type;
    _Bool _isTypeHasBeenSet;
    NSString *_relationTimeStamp;
    NSDecimalNumber *_buyerMoney;
    NSDecimalNumber *_sellerMoney;
    _Bool _isCategoryHasBeenSet;
    KDCategory *_buyerCatgory;
    KDCategory *_sellerCategory;
    int _ordered;
    long long _repeatInterval;
    double _firstReminderTime;
    long long _createdSourceType;
    long long _groupType;
    NSString *_changedLog;
}

@property(retain, nonatomic) NSString *changedLog; // @synthesize changedLog=_changedLog;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(nonatomic) long long createdSourceType; // @synthesize createdSourceType=_createdSourceType;
@property(nonatomic) double firstReminderTime; // @synthesize firstReminderTime=_firstReminderTime;
@property(nonatomic) long long repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property int ordered; // @synthesize ordered=_ordered;
@property(retain, nonatomic) NSDecimalNumber *sellerMoney; // @synthesize sellerMoney=_sellerMoney;
@property(retain, nonatomic) NSDecimalNumber *buyerMoney; // @synthesize buyerMoney=_buyerMoney;
@property(retain, nonatomic) KDCategory *sellerCategory; // @synthesize sellerCategory=_sellerCategory;
@property(retain, nonatomic) KDCategory *buyerCategory; // @synthesize buyerCategory=_buyerCatgory;
@property(retain, nonatomic) SubjectItem *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) KDAccount *buyerAccount; // @synthesize buyerAccount=_buyerAccount;
@property(retain, nonatomic) TradingEntity *relationUnit; // @synthesize relationUnit=_relationUnit;
@property(retain, nonatomic) KDAccount *sellerAccount; // @synthesize sellerAccount=_sellerAccount;
@property _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) Tag *member; // @synthesize member=_member;
@property(retain, nonatomic) Tag *project; // @synthesize project=_project;
@property(retain, nonatomic) NSString *relationTimeStamp; // @synthesize relationTimeStamp=_relationTimeStamp;
@property(retain, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property double modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property double createdTime; // @synthesize createdTime=_createdTime;
@property long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
@property(retain, nonatomic) KDAccount *account;
@property(retain, nonatomic) KDCategory *category;
@property(retain, nonatomic) NSDecimalNumber *currencyValue;
@property(readonly) _Bool needSellerCategory;
@property(readonly) _Bool needBuyerCategory;
@property long long type;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

