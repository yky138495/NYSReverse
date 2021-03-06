//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PushMessageService.h"

@class NSString;

@interface PushMessageServiceImpl : NSObject <PushMessageService>
{
}

- (void)pullNewbieDaily;
- (void)sendUnreadBadgesWithNumber:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)sendReadStatusToServerWithMessageId:(id)arg1;
- (id)productName;
- (id)parseUser:(id)arg1;
- (id)parseMessages:(id)arg1;
- (id)requestWithParams:(id)arg1;
- (id)encryptedQueryStringWithParams:(id)arg1;
- (id)jsonEncryptedRequestWithcmd:(id)arg1 params:(id)arg2;
- (void)sendMessageUser:(id)arg1 applyToJoinSomeone:(id)arg2 accountBookName:(id)arg3 accountBookSyncId:(id)arg4 accountInvitationCode:(id)arg5 withSuccessCallback:(CDUnknownBlockType)arg6 andFailureCallback:(CDUnknownBlockType)arg7;
- (void)user:(id)arg1 invite:(id)arg2 toAccountBook:(id)arg3 withCode:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)sendMessage:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchAvailableMessagesSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)fetchAvailableMessagesWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchAvailableMessageNumberSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)subscribePushNotificationForUser:(id)arg1 type:(id)arg2 stauts:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)initDeviceUnsubscribeInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)queryUnsubscribeInfoWithUserName:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)unsubscribePushNotificationForUser:(id)arg1 type:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)subscribePushNotificationForUser:(id)arg1 type:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)unsubscribeMessageForUser:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)unsubscribeMessageForUser:(id)arg1;
- (id)baseUrlWithCmd:(id)arg1;
- (void)subscribeMessageForUser:(id)arg1 WithDeviceToken:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)subscribeMessageForUser:(id)arg1;
- (void)registerDeviceToken:(id)arg1 user:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)registerDeviceToken:(id)arg1 user:(id)arg2 success:(CDUnknownBlockType)arg3;
- (void)fetchMessageWithID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchMessageSuccess:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

