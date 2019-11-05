/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSArray, AAFamilyMember, NSString;

@interface AAFamilyDetailsResponse : AAResponse {

	NSArray* _members;
	BOOL _canAddMembers;
	BOOL _canAddChildMembers;
	AAFamilyMember* _organizer;
	AAFamilyMember* _me;
	NSArray* _invites;
	NSArray* _pendingMembers;
	NSString* _addMemberInstructions;
	NSString* _childAccountPrompt;
	NSString* _childAccountButtonTitle;

}

@property (nonatomic,readonly) NSArray * members;                               //@synthesize members=_members - In the implementation block
@property (nonatomic,readonly) AAFamilyMember * organizer;                      //@synthesize organizer=_organizer - In the implementation block
@property (nonatomic,readonly) AAFamilyMember * me;                             //@synthesize me=_me - In the implementation block
@property (nonatomic,readonly) NSArray * invites;                               //@synthesize invites=_invites - In the implementation block
@property (nonatomic,readonly) NSArray * pendingMembers;                        //@synthesize pendingMembers=_pendingMembers - In the implementation block
@property (nonatomic,readonly) long long memberCount; 
@property (nonatomic,readonly) long long pendingMemberCount; 
@property (nonatomic,readonly) long long pendingInviteCount; 
@property (nonatomic,readonly) BOOL canAddMembers;                              //@synthesize canAddMembers=_canAddMembers - In the implementation block
@property (nonatomic,readonly) BOOL canAddChildMembers;                         //@synthesize canAddChildMembers=_canAddChildMembers - In the implementation block
@property (nonatomic,readonly) NSString * addMemberInstructions;                //@synthesize addMemberInstructions=_addMemberInstructions - In the implementation block
@property (nonatomic,readonly) NSString * childAccountPrompt;                   //@synthesize childAccountPrompt=_childAccountPrompt - In the implementation block
@property (nonatomic,readonly) NSString * childAccountButtonTitle;              //@synthesize childAccountButtonTitle=_childAccountButtonTitle - In the implementation block
@property (nonatomic,readonly) NSArray * firstNames; 
-(NSArray *)members;
-(AAFamilyMember *)me;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(long long)memberCount;
-(long long)pendingMemberCount;
-(long long)pendingInviteCount;
-(NSArray *)firstNames;
-(AAFamilyMember *)organizer;
-(NSArray *)invites;
-(NSArray *)pendingMembers;
-(BOOL)canAddMembers;
-(BOOL)canAddChildMembers;
-(NSString *)addMemberInstructions;
-(NSString *)childAccountPrompt;
-(NSString *)childAccountButtonTitle;
@end

