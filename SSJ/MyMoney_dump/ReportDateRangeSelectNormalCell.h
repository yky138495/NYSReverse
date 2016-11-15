//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UIView;

@interface ReportDateRangeSelectNormalCell : UITableViewCell
{
    _Bool _isSelected;
    long long _rangeType;
    UIView *_bottomSeparator;
    UIImageView *_checkmark;
}

@property(retain, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long rangeType; // @synthesize rangeType=_rangeType;
- (void).cxx_destruct;
- (id)dateRangeTypeToString:(long long)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

