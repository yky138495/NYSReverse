//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DSActivityView.h"

@interface DSAlertView : DSActivityView
{
}

+ (void)removeViewAnimated:(_Bool)arg1;
+ (void)setLabelText:(id)arg1;
- (void)removeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)animateRemove;
- (void)animateShow;
- (void)layoutSubviews;
- (id)activityLabel;
- (id)activityIndicator;
- (id)borderView;
- (void)setupBackground;
- (struct CGRect)enclosingFrame;
- (id)viewForView:(id)arg1;

@end

