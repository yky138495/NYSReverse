//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIView;

@interface HomeBottomButton : UIButton
{
    struct CGRect _lastAdjustedFrame;
    UIView *_redDotView;
}

+ (id)gradientImageForRadius:(double)arg1;
- (void).cxx_destruct;
- (void)adjustImageAndTitle;
@property(nonatomic, getter=isShowRedDot) _Bool showRedDot;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

