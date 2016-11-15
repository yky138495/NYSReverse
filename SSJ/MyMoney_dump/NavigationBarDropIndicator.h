//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel;

@interface NavigationBarDropIndicator : UIButton
{
    _Bool _arrowShouldUp;
    UILabel *_dropButtonLabel;
    id <NavigationBarDropIndicatorDelegate> _delegate;
    UIImageView *_dropIndicator;
}

@property(nonatomic) _Bool arrowShouldUp; // @synthesize arrowShouldUp=_arrowShouldUp;
@property(retain, nonatomic) UIImageView *dropIndicator; // @synthesize dropIndicator=_dropIndicator;
@property(nonatomic) __weak id <NavigationBarDropIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *dropButtonLabel; // @synthesize dropButtonLabel=_dropButtonLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)handleClick;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

