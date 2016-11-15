//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAShapeLayer, UIColor;

@interface MGCheckBoxView : UIView
{
    _Bool _checked;
    CAShapeLayer *_strokeLayer;
    CALayer *_backLayer;
    double _padding;
    UIColor *_color;
    UIColor *_checkedBackColor;
    UIColor *_checkedBorderColor;
    double _checkedBorderWidth;
    UIColor *_uncheckedBackColor;
    UIColor *_uncheckedBorderColor;
    double _uncheckedBorderWidth;
}

@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) double uncheckedBorderWidth; // @synthesize uncheckedBorderWidth=_uncheckedBorderWidth;
@property(retain, nonatomic) UIColor *uncheckedBorderColor; // @synthesize uncheckedBorderColor=_uncheckedBorderColor;
@property(retain, nonatomic) UIColor *uncheckedBackColor; // @synthesize uncheckedBackColor=_uncheckedBackColor;
@property(nonatomic) double checkedBorderWidth; // @synthesize checkedBorderWidth=_checkedBorderWidth;
@property(retain, nonatomic) UIColor *checkedBorderColor; // @synthesize checkedBorderColor=_checkedBorderColor;
@property(retain, nonatomic) UIColor *checkedBackColor; // @synthesize checkedBackColor=_checkedBackColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(retain, nonatomic) CALayer *backLayer; // @synthesize backLayer=_backLayer;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
