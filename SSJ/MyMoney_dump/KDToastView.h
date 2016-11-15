//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface KDToastView : UIView
{
    double showViewDuration;
    NSTimer *showViewTimer;
    UIView *parentView;
}

+ (void)hide;
- (void).cxx_destruct;
- (void)handleHideToastNotification:(id)arg1;
- (void)hideViewTimerHandler:(id)arg1;
- (void)destroyTimer;
- (void)dealloc;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1 message:(id)arg2 showDuration:(double)arg3 backgroundColor:(id)arg4 showInView:(id)arg5;

@end
