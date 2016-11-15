//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AccountData : NSObject
{
    _Bool _isSelected;
    _Bool _isPrimaryCard;
    NSString *_UUID;
    NSString *_currencyCode;
    double _dataBeginTime;
    double _dataEndTime;
    NSString *_cardName;
    NSArray *_transactions;
    NSString *_groupUUID;
}

+ (id)accountDataSelectorWithDictionary:(id)arg1;
@property(nonatomic) _Bool isPrimaryCard; // @synthesize isPrimaryCard=_isPrimaryCard;
@property(retain, nonatomic) NSString *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property(retain, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
@property(nonatomic) double dataEndTime; // @synthesize dataEndTime=_dataEndTime;
@property(nonatomic) double dataBeginTime; // @synthesize dataBeginTime=_dataBeginTime;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (_Bool)isSupplementaryCard;
- (id)dictionaryForJson;

@end

