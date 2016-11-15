//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LoginViewControllerDelegate.h"

@class NSString, ShareAccountBookInvitationPromptView;

@interface InvitationURLOpenHandler : NSObject <LoginViewControllerDelegate>
{
    ShareAccountBookInvitationPromptView *_promptView;
    NSString *_inviterAccount;
    NSString *_accountBookName;
    NSString *_invitationCode;
    NSString *_accountBookSyncId;
}

+ (id)descriptionForErrorCode:(long long)arg1;
@property(retain, nonatomic) NSString *accountBookSyncId; // @synthesize accountBookSyncId=_accountBookSyncId;
@property(retain, nonatomic) NSString *invitationCode; // @synthesize invitationCode=_invitationCode;
@property(retain, nonatomic) NSString *accountBookName; // @synthesize accountBookName=_accountBookName;
@property(retain, nonatomic) NSString *inviterAccount; // @synthesize inviterAccount=_inviterAccount;
- (void).cxx_destruct;
- (void)loginViewControllerDidFinishedSync:(id)arg1;
- (void)addRecoardMessageIsApplied:(_Bool)arg1;
- (void)showSuccess;
- (void)showError:(id)arg1;
- (void)sendRequest;
- (void)handlePromptViewDismissButtonClicked:(id)arg1;
- (void)handlePromptViewApproveButtonClicked:(id)arg1;
- (id)promptView;
- (void)showPromptViewForNewSideslipVersion;
- (void)showPromptViewForOldSideslipVersion;
- (void)showPromptView;
- (void)handleInvitationWithUsername:(id)arg1 andThumbImage:(id)arg2 andInvitationCode:(id)arg3 andAccountBookName:(id)arg4 andAccountBookSyncId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
