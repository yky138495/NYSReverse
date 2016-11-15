//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDelegate.h"

@class NSString, UIView;

@interface ZUUIRevealController : UIViewController <UITableViewDelegate>
{
    float _previousPanOffset;
    int _currentFrontViewPosition;
    UIViewController *_frontViewController;
    UIViewController *_rearViewController;
    UIView *_frontView;
    UIView *_rearView;
    id <ZUUIRevealControllerDelegate> _delegate;
    double _rearViewRevealWidth;
    double _maxRearViewRevealOverdraw;
    double _rearViewPresentationWidth;
    double _revealViewTriggerWidth;
    double _concealViewTriggerWidth;
    double _quickFlickVelocity;
    double _toggleAnimationDuration;
    double _frontViewShadowRadius;
    double _frontViewShadowHeight;
}

@property(nonatomic) double frontViewShadowHeight; // @synthesize frontViewShadowHeight=_frontViewShadowHeight;
@property(nonatomic) double frontViewShadowRadius; // @synthesize frontViewShadowRadius=_frontViewShadowRadius;
@property(nonatomic) double toggleAnimationDuration; // @synthesize toggleAnimationDuration=_toggleAnimationDuration;
@property(nonatomic) double quickFlickVelocity; // @synthesize quickFlickVelocity=_quickFlickVelocity;
@property(nonatomic) double concealViewTriggerWidth; // @synthesize concealViewTriggerWidth=_concealViewTriggerWidth;
@property(nonatomic) double revealViewTriggerWidth; // @synthesize revealViewTriggerWidth=_revealViewTriggerWidth;
@property(nonatomic) double rearViewPresentationWidth; // @synthesize rearViewPresentationWidth=_rearViewPresentationWidth;
@property(nonatomic) double maxRearViewRevealOverdraw; // @synthesize maxRearViewRevealOverdraw=_maxRearViewRevealOverdraw;
@property(nonatomic) double rearViewRevealWidth; // @synthesize rearViewRevealWidth=_rearViewRevealWidth;
@property(nonatomic) __weak id <ZUUIRevealControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *rearView; // @synthesize rearView=_rearView;
@property(retain, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
@property(retain, nonatomic) UIViewController *rearViewController; // @synthesize rearViewController=_rearViewController;
@property(retain, nonatomic) UIViewController *frontViewController; // @synthesize frontViewController=_frontViewController;
@property(nonatomic) int currentFrontViewPosition; // @synthesize currentFrontViewPosition=_currentFrontViewPosition;
@property(nonatomic) float previousPanOffset; // @synthesize previousPanOffset=_previousPanOffset;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)_removeViewControllerFromHierarchy:(id)arg1;
- (void)_addRearViewControllerToHierarchy:(id)arg1;
- (void)_addFrontViewControllerToHierarchy:(id)arg1;
- (void)setFrontViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_swapCurrentFrontViewControllerWith:(id)arg1 animated:(_Bool)arg2;
- (double)_calculateOffsetForTranslationInView:(double)arg1;
- (void)_handleRevealGestureStateEndedWithRecognizer:(id)arg1;
- (void)_handleRevealGestureStateChangedWithRecognizer:(id)arg1;
- (void)_handleRevealGestureStateBeganWithRecognizer:(id)arg1;
- (void)revealGesture:(id)arg1;
- (void)showFrontViewCompletely:(_Bool)arg1;
- (void)hideFrontView;
- (void)_revealCompletelyAnimationWithDuration:(double)arg1;
- (void)_concealPartiallyAnimationWithDuration:(double)arg1;
- (void)_concealAnimationWithDuration:(double)arg1 resigningCompletelyFromRearViewPresentationMode:(_Bool)arg2;
- (void)_revealAnimationWithDuration:(double)arg1;
- (void)revealToggle:(id)arg1 animationDuration:(double)arg2;
- (void)revealToggle:(id)arg1;
- (void)_loadDefaultConfiguration;
- (id)initWithFrontViewController:(id)arg1 rearViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
