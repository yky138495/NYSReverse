//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class UIView;

@interface FDTextView : UITextView
{
    UIView *_placeHolderView;
}

@property(readonly, nonatomic) UIView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
- (void).cxx_destruct;
- (void)handleDidEndEditingNotification:(id)arg1;
- (void)handleDidBeginEditingNotification:(id)arg1;
- (void)setText:(id)arg1;
- (void)setEditable:(_Bool)arg1;
- (void)registerNotifications:(_Bool)arg1;
- (void)dealloc;
- (void)commonInitial;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
