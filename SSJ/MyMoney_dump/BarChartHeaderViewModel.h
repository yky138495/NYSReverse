//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface BarChartHeaderViewModel : NSObject
{
    _Bool _leftHidden;
    _Bool _rightHidden;
    NSString *_leftTitle;
    NSString *_leftContent;
    NSString *_rightTitle;
    NSString *_rightContent;
    UIColor *_leftContentColor;
    UIColor *_rightContentColor;
}

@property(retain, nonatomic) UIColor *rightContentColor; // @synthesize rightContentColor=_rightContentColor;
@property(retain, nonatomic) UIColor *leftContentColor; // @synthesize leftContentColor=_leftContentColor;
@property(nonatomic) _Bool rightHidden; // @synthesize rightHidden=_rightHidden;
@property(nonatomic) _Bool leftHidden; // @synthesize leftHidden=_leftHidden;
@property(retain, nonatomic) NSString *rightContent; // @synthesize rightContent=_rightContent;
@property(retain, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) NSString *leftContent; // @synthesize leftContent=_leftContent;
@property(retain, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (void).cxx_destruct;

@end

