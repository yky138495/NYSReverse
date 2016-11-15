//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface AccountbookCreateCoverCell : UITableViewCell
{
    _Bool _showDisclosureIndicator;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UIView *_bottomSeparator;
    UIImageView *_disclosureIndicator;
}

@property(retain, nonatomic) UIImageView *disclosureIndicator; // @synthesize disclosureIndicator=_disclosureIndicator;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
