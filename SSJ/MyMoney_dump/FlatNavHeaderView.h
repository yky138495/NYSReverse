//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NavHeaderView.h"

@class UIFont;

@interface FlatNavHeaderView : NavHeaderView
{
    UIFont *_titleLabelFont;
    UIFont *_countingLabelFont;
    _Bool _hideTopValue;
}

@property(nonatomic) _Bool hideTopValue; // @synthesize hideTopValue=_hideTopValue;
- (void).cxx_destruct;
- (void)refreshUI:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
