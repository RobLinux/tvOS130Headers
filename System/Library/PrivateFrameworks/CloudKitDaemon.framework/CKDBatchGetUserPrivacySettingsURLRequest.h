/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest {

	NSArray* _containerPrivacySettings;

}

@property (nonatomic,retain) NSArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
-(long long)databaseScope;
-(int)operationType;
-(NSArray *)containerPrivacySettings;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)requiresTokenRegistration;
-(void)setContainerPrivacySettings:(NSArray *)arg1 ;
@end

