//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImage;

@interface FDFlipIconButton : UIButton
{
    _Bool _flipped;
    UIImage *_flipImage;
}

@property(nonatomic) _Bool flipped; // @synthesize flipped=_flipped;
@property(retain, nonatomic) UIImage *flipImage; // @synthesize flipImage=_flipImage;
- (void).cxx_destruct;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;

@end
