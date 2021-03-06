//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSTimer;

@interface CaptchaButton : UIButton
{
    double _countDown;
    NSTimer *_timer;
    unsigned long long _timerCount;
}

@property(nonatomic) unsigned long long timerCount; // @synthesize timerCount=_timerCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double countDown; // @synthesize countDown=_countDown;
- (void).cxx_destruct;
- (void)startCountDown;
- (void)setDisableTitle;
- (void)commonInit;
- (void)setUpTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

