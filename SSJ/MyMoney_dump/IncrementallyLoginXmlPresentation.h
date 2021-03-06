//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseXmlPresentation.h"

@class NSArray, NSDictionary, NSString;

@interface IncrementallyLoginXmlPresentation : BaseXmlPresentation
{
    int _responseCmdType;
    NSString *_sessionKey;
    NSString *_redirectURL;
    NSString *_errorCode;
    NSString *_errorMessage;
    NSDictionary *_transactionsMap;
    NSArray *_modifyTransactions;
    NSString *_username;
    NSString *_password;
    NSString *_accountBookID;
    NSString *_transactionsInJson;
}

+ (id)responsePresentationWithResponseData:(id)arg1;
+ (id)productVersion;
+ (id)productName;
@property(retain, nonatomic) NSString *transactionsInJson; // @synthesize transactionsInJson=_transactionsInJson;
@property(retain, nonatomic) NSString *accountBookID; // @synthesize accountBookID=_accountBookID;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSArray *modifyTransactions; // @synthesize modifyTransactions=_modifyTransactions;
@property(retain, nonatomic) NSDictionary *transactionsMap; // @synthesize transactionsMap=_transactionsMap;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property int responseCmdType; // @synthesize responseCmdType=_responseCmdType;
- (void).cxx_destruct;
- (id)description;
- (id)xmlString;
- (void)setAddedTransactions:(id)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 accountBookID:(id)arg3;
- (id)protocolURLSuffix;

@end

