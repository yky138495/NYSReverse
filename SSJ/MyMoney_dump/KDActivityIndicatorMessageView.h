//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface KDActivityIndicatorMessageView : UIView
{
    UIActivityIndicatorView *indicatoryView;
    UILabel *indicatorMessageLabel;
    int ownerReferenceCount;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1 message:(id)arg2;

@end

