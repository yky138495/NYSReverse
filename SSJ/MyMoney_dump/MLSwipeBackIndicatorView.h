//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CATextLayer, UIFont;

@interface MLSwipeBackIndicatorView : UIView
{
    CATextLayer *_textLayer;
    UIFont *_font;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (void).cxx_destruct;
- (void)sizeToFit:(id)arg1 font:(id)arg2;
- (void)setText:(id)arg1;
- (void)resetTextPosition;
- (void)refreshVerticalText;
- (void)switchToRightMode;
- (void)switchToLeftMode;
- (id)initWithFrame:(struct CGRect)arg1;

@end
