//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface MailBillImportUndoVo : NSObject
{
    NSString *_mailboxName;
    NSDate *_importDate;
    NSArray *_transactionIdArray;
}

@property(readonly, nonatomic) NSArray *transactionIdArray; // @synthesize transactionIdArray=_transactionIdArray;
@property(readonly, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(readonly, nonatomic) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)arg1 andImportDate:(id)arg2 andTransactionIDs:(id)arg3;

@end
