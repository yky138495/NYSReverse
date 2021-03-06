//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KDAccountFix, KDCategoryFix, NSDecimalNumber, NSString, TagFix, TradingEntityFix;

@interface TransactionFix : NSObject
{
    long long _oid;
    double _createdTime;
    double _modifiedTime;
    double _tradeTime;
    double _lastUpdateTime;
    NSString *_memo;
    KDAccountFix *_sellerAccount;
    TradingEntityFix *_relationUnit;
    KDAccountFix *_buyerAccount;
    TradingEntityFix *_creator;
    TradingEntityFix *_modifier;
    TagFix *_project;
    NSString *_photoName;
    _Bool _isPhotoNeedUpload;
    _Bool _isDeleted;
    long long _type;
    _Bool _isTypeHasBeenSet;
    NSString *_relationTimeStamp;
    NSDecimalNumber *_buyerMoney;
    NSDecimalNumber *_sellerMoney;
    _Bool _isCategoryHasBeenSet;
    KDCategoryFix *_buyerCatgory;
    KDCategoryFix *_sellerCategory;
}

@property(retain, nonatomic) NSDecimalNumber *sellerMoney; // @synthesize sellerMoney=_sellerMoney;
@property(retain, nonatomic) NSDecimalNumber *buyerMoney; // @synthesize buyerMoney=_buyerMoney;
@property(retain, nonatomic) KDCategoryFix *sellerCategory; // @synthesize sellerCategory=_sellerCategory;
@property(retain, nonatomic) KDCategoryFix *buyerCategory; // @synthesize buyerCategory=_buyerCatgory;
@property(retain, nonatomic) KDAccountFix *buyerAccount; // @synthesize buyerAccount=_buyerAccount;
@property(retain, nonatomic) TradingEntityFix *relationUnit; // @synthesize relationUnit=_relationUnit;
@property(retain, nonatomic) KDAccountFix *sellerAccount; // @synthesize sellerAccount=_sellerAccount;
@property _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property _Bool needUploadPhoto; // @synthesize needUploadPhoto=_isPhotoNeedUpload;
@property(retain, nonatomic) NSString *photoName; // @synthesize photoName=_photoName;
@property(retain, nonatomic) TagFix *project; // @synthesize project=_project;
@property(retain, nonatomic) TradingEntityFix *modifier; // @synthesize modifier=_modifier;
@property(retain, nonatomic) TradingEntityFix *creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSString *relationTimeStamp; // @synthesize relationTimeStamp=_relationTimeStamp;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property double tradeTime; // @synthesize tradeTime=_tradeTime;
@property double modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property double createdTime; // @synthesize createdTime=_createdTime;
@property long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
@property(retain, nonatomic) KDCategoryFix *category;
@property(retain, nonatomic) NSDecimalNumber *currencyValue;
@property(readonly) _Bool needSellerCategory;
@property(readonly) _Bool needBuyerCategory;
@property long long type;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

