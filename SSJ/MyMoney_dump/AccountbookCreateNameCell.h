//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDBaseAccountBookCell.h"

@class UILabel, UITextField, UIView;

@interface AccountbookCreateNameCell : FDBaseAccountBookCell
{
    UITextField *_nameTextField;
    UILabel *_titleLabel;
    UIView *_bottomSeparator;
}

@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

