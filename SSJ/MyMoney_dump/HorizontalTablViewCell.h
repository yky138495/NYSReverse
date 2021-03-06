//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface HorizontalTablViewCell : UIView
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    id _target;
    SEL _selector;
    _Bool _highlighted;
}

@property _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

