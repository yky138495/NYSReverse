//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AccountLevelLabel : UIView
{
    UIImageView *_backgroundView;
    UILabel *_levelLabel;
}

@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)setLevel:(long long)arg1;
- (id)initWithLevel:(long long)arg1 withHeight:(double)arg2;

@end

