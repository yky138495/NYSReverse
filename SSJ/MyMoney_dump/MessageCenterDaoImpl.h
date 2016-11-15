//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "MessageCenterDao.h"

@class NSString;

@interface MessageCenterDaoImpl : BaseDao <MessageCenterDao>
{
}

- (long long)numOfMessagesWithoutType:(long long)arg1;
- (long long)numOfUnReadMeesagesWithType:(long long)arg1;
- (long long)numOfAllUnReadMeesages;
- (id)unreadMessages;
- (id)messgeArray;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)markedMessageAsRead:(id)arg1;
- (_Bool)markedMessagesAsReadWithoutType:(int)arg1;
- (_Bool)markedAllMessagesAsRead;
- (_Bool)updateMessageThumbnailName:(id)arg1 withMessage:(long long)arg2;
- (_Bool)insertMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

