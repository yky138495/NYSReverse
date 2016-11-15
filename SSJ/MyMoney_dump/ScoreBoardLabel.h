//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class CADisplayLink, NSDate, NSDecimalNumber, NSNumber, NSString;

@interface ScoreBoardLabel : UILabel
{
    _Bool _disableAnimation;
    _Bool _showIntegerNumber;
    _Bool _isAnimationEnded;
    id <ScoreBoardLabelDelegate> _delegate;
    NSDate *_startAnimateDate;
    NSDecimalNumber *_finalNumber;
    NSString *_currencyCode;
    CADisplayLink *_displayLink;
    NSNumber *_fromAmount;
    NSNumber *_alphaBeforeAnimate;
}

@property(retain, nonatomic) NSNumber *alphaBeforeAnimate; // @synthesize alphaBeforeAnimate=_alphaBeforeAnimate;
@property(retain, nonatomic) NSNumber *fromAmount; // @synthesize fromAmount=_fromAmount;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool isAnimationEnded; // @synthesize isAnimationEnded=_isAnimationEnded;
@property(nonatomic) _Bool showIntegerNumber; // @synthesize showIntegerNumber=_showIntegerNumber;
@property(nonatomic) _Bool disableAnimation; // @synthesize disableAnimation=_disableAnimation;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *finalNumber; // @synthesize finalNumber=_finalNumber;
@property(retain, nonatomic) NSDate *startAnimateDate; // @synthesize startAnimateDate=_startAnimateDate;
@property(nonatomic) __weak id <ScoreBoardLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisterKVO;
- (void)registerKVO;
- (void)setText:(id)arg1;
- (void)setTextWithNumber:(id)arg1;
- (void)timerAction;
- (void)animateWithIntergerAmount:(id)arg1;
- (void)animateWithAmount:(id)arg1;
- (void)animateDidEnd;
- (void)animateWithAmount:(id)arg1 currencyCode:(id)arg2;
- (void)animateFromAmount:(id)arg1 toAmount:(id)arg2;
- (void)destroyTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end
