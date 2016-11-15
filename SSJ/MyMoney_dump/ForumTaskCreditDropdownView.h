//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString;

@interface ForumTaskCreditDropdownView : UIControl
{
    NSString *_content;
    NSString *_credit;
    NSString *_accountName;
    id _target;
    SEL _selector;
}

@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) NSString *credit; // @synthesize credit=_credit;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)dismissWithAction;
- (void)hide;
- (void)showOnView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 content:(id)arg3 credit:(id)arg4 account:(id)arg5;
- (void)dealloc;

@end

