//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface QuickKeepingTableViewCell : UITableViewCell
{
    UILabel *_typeLabel;
    UIView *_textSeparatorLine1;
    UIView *_textSeparatorLine2;
    UIView *_separatorLine;
    UILabel *_amountLabel;
    UILabel *_accountLabel;
    UILabel *_transferToLabel;
    long long _type;
    UILabel *_alarmTextLabel;
    UIImageView *_alarmIcon;
    UIImageView *_transferArrowImageView;
    unsigned long long _seperatorType;
    NSString *_alarmText;
}

+ (double)cellHeight;
@property(copy, nonatomic) NSString *alarmText; // @synthesize alarmText=_alarmText;
@property(nonatomic) unsigned long long seperatorType; // @synthesize seperatorType=_seperatorType;
@property(retain, nonatomic) UIImageView *transferArrowImageView; // @synthesize transferArrowImageView=_transferArrowImageView;
@property(retain, nonatomic) UIImageView *alarmIcon; // @synthesize alarmIcon=_alarmIcon;
@property(retain, nonatomic) UILabel *alarmTextLabel; // @synthesize alarmTextLabel=_alarmTextLabel;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *transferToLabel; // @synthesize transferToLabel=_transferToLabel;
@property(retain, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
- (void).cxx_destruct;
- (void)setEditing:(_Bool)arg1;
- (void)layoutTransferInfoDoNotExceedPositionX:(double)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

