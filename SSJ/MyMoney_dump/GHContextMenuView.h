//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, NSMutableArray, NSString, UILongPressGestureRecognizer;

@interface GHContextMenuView : UIView <UIGestureRecognizerDelegate>
{
    CADisplayLink *displayLink;
    _Bool _isShowing;
    _Bool _isPaning;
    id <GHContextOverlayViewDataSource> _dataSource;
    id <GHContextOverlayViewDelegate> _delegate;
    long long _menuActionType;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSMutableArray *_menuItems;
    double _radius;
    double _arcAngle;
    double _angleBetweenItems;
    NSMutableArray *_itemLocations;
    long long _prevIndex;
    struct CGColor *_itemBGHighlightedColor;
    struct CGColor *_itemBGColor;
    struct CGPoint _longPressLocation;
    struct CGPoint _curretnLocation;
}

@property(nonatomic) struct CGColor *itemBGColor; // @synthesize itemBGColor=_itemBGColor;
@property(nonatomic) struct CGColor *itemBGHighlightedColor; // @synthesize itemBGHighlightedColor=_itemBGHighlightedColor;
@property(nonatomic) long long prevIndex; // @synthesize prevIndex=_prevIndex;
@property(retain, nonatomic) NSMutableArray *itemLocations; // @synthesize itemLocations=_itemLocations;
@property(nonatomic) double angleBetweenItems; // @synthesize angleBetweenItems=_angleBetweenItems;
@property(nonatomic) double arcAngle; // @synthesize arcAngle=_arcAngle;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) NSMutableArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic) struct CGPoint curretnLocation; // @synthesize curretnLocation=_curretnLocation;
@property(nonatomic) struct CGPoint longPressLocation; // @synthesize longPressLocation=_longPressLocation;
@property(nonatomic) _Bool isPaning; // @synthesize isPaning=_isPaning;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(nonatomic) long long menuActionType; // @synthesize menuActionType=_menuActionType;
@property(nonatomic) id <GHContextOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <GHContextOverlayViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawCircle:(struct CGPoint)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animateMenu:(_Bool)arg1;
- (void)resetPreviousSelection;
- (void)highlightMenuItemForPoint;
- (double)validaAngle:(double)arg1;
- (double)angleBeweenStartinPoint:(struct CGPoint)arg1 endingPoint:(struct CGPoint)arg2;
- (double)calculateRadius;
- (double)itemAngleAtIndex:(unsigned long long)arg1;
- (id)locationForItemAtIndex:(unsigned long long)arg1;
- (void)layoutMenuItems;
- (void)reloadData;
- (id)layerWithImage:(id)arg1;
- (void)hideMenu;
- (void)showMenu;
- (void)longPressDetected:(id)arg1;
- (void)clickToShowMenu:(id)arg1;
- (void)dismissWithSelectedIndexForMenuAtPoint:(struct CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)indexOfClosestMatchAtPoint:(struct CGPoint)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

