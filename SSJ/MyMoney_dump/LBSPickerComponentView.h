//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface LBSPickerComponentView : UIView
{
    UILabel *_nameLabel;
    UILabel *_locationLabel;
    UILabel *_defaultTextLabel;
}

+ (double)componentHeight;
@property(retain, nonatomic) UILabel *defaultTextLabel; // @synthesize defaultTextLabel=_defaultTextLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

