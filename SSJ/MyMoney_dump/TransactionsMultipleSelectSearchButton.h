//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel, UIView;

@interface TransactionsMultipleSelectSearchButton : UIButton
{
    UIView *_background;
    UILabel *_label;
    UIImageView *_searchIcon;
}

@property(retain, nonatomic) UIImageView *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

