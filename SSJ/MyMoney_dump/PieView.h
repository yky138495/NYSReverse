//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PieLayerDelegate.h"

@class CAShapeLayer, NSTimer, PieLayer;

@interface PieView : UIView <PieLayerDelegate>
{
    PieLayer *pieLayer;
    struct CGPoint lastPoint;
    struct CGPoint currentPoint;
    double *lastTime;
    double *lastAngle;
    long long lastIndex;
    double angleOfPieRotation;
    NSTimer *timer;
    double startAnimationTime;
    double lastInterval;
    double duration;
    double initVelocity;
    struct CATransform3D initTransform3D;
    long long lastSelectedSectorIndex;
    long long numberOfSectors;
    id <PieViewDelegate> delegate;
    double *anglesOfAnimation;
    struct CGPoint circleCenter;
    double diameter;
    CAShapeLayer *_maskLayer;
}

@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) id <PieViewDelegate> delegate; // @synthesize delegate;
@property(readonly) long long selectedSectorIndex;
- (void)animationDidStop;
- (void)selectedSectorIndex:(long long)arg1;
- (id)colorAtSector:(long long)arg1;
- (void)notifyDelegateIfChangedSelectionSector;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)adjustToSectorAt:(long long)arg1;
- (void)adjustToTheMiddleOfSector:(_Bool)arg1;
- (void)tickSectors;
- (void)animateSubviewInPieChart;
- (void)animateSectors;
- (void)setAngles:(double *)arg1 withNumber:(long long)arg2;
- (void)tick;
- (void)stopAnimation;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)turnPieWhileMovingFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 at:(double)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithRadius:(double)arg1 centerAt:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

