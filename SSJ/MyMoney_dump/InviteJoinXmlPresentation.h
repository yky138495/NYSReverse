//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseXmlPresentation.h"

@class NSString;

@interface InviteJoinXmlPresentation : BaseXmlPresentation
{
    NSString *_username;
    NSString *_password;
    NSString *_invitationCode;
    NSString *_result;
    int _errCode;
    NSString *_errDesc;
}

+ (void)setInvitationPresentation:(id)arg1 WithResponseData:(id)arg2;
+ (id)inviteJoinXmlPresentationWithResponseXmlString:(id)arg1;
@property(retain, nonatomic) NSString *errDesc; // @synthesize errDesc=_errDesc;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *invitationCode; // @synthesize invitationCode=_invitationCode;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)requestWithURL:(id)arg1;
- (id)xmlString;
- (id)initWithUserName:(id)arg1 password:(id)arg2 invitationCode:(id)arg3;

@end

