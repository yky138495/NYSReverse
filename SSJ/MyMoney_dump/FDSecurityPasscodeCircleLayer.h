//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface FDSecurityPasscodeCircleLayer : CALayer
{
    CALayer *_dotLayer;
    _Bool _active;
}

+ (id)animationForDeactiving;
+ (id)animationForActiving;
@property(nonatomic, getter=isActiving) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

