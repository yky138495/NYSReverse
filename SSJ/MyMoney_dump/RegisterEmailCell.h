//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AutoCompleteTextField, UIView;

@interface RegisterEmailCell : UITableViewCell
{
    AutoCompleteTextField *_emailField;
    UIView *_topSeparator;
}

@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) AutoCompleteTextField *emailField; // @synthesize emailField=_emailField;
- (void).cxx_destruct;
- (void)initEmailField;
- (void)initTopSeparator;
- (void)initSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
