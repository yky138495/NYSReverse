//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessageCenterService.h"

@class NSString;

@interface MessageCenterServiceImpl : NSObject <MessageCenterService>
{
}

- (void)getMoreRecommendDataWithPageNum:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getFundAdvertisement:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getRecommendData:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (_Bool)isLocalMessage:(id)arg1;
- (void)setGlobalMessageHandleResult:(unsigned long long)arg1 withId:(long long)arg2;
- (void)markedMessageCenterNoFirstAlert;
- (void)findAndInsertAllWarnedBudgetMessage;
- (_Bool)insertNotification:(id)arg1 BudgetItemVo:(id)arg2;
- (id)budgetSourceKeyWithBudgetEventVoArray:(id)arg1;
- (id)budgetNameWithBudgetEventVoArray:(id)arg1;
- (id)textWithBudgetItemVoArray:(id)arg1;
- (_Bool)needSendBudgetWarning:(id)arg1;
- (_Bool)haveSettingBudget:(id)arg1;
- (long long)numOfMessagesWithoutType:(long long)arg1;
- (long long)numOfUnReadMeesagesWithType:(long long)arg1;
- (long long)numOfAllUnReadMessages;
- (void)sortMessages:(id)arg1;
- (void)sortMessagesByTime:(id)arg1;
- (id)sortedAllMessages;
- (id)sortedReadMessages;
- (id)sortedUnreadMessages;
- (id)unreadMessages;
- (id)messageArray;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)markedMessageAsRead:(id)arg1;
- (_Bool)markedMessagesAsReadWithoutType:(int)arg1;
- (_Bool)markedAllMessagesAsRead;
- (_Bool)updateMessageThumbnailName:(id)arg1 withMessage:(id)arg2;
- (_Bool)insertMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

