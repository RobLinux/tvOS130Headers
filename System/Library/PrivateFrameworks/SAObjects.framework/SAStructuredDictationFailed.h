/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * recognition; 
@property (nonatomic,copy) NSString * userFacingReasonDescription; 
@property (nonatomic,copy) NSString * userFacingReasonTitle; 
+(id)structuredDictationFailed;
+(id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_dialogIdentifier;
-(id)groupIdentifier;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)recognition;
-(void)setRecognition:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)userFacingReasonDescription;
-(void)setUserFacingReasonDescription:(NSString *)arg1 ;
-(NSString *)userFacingReasonTitle;
-(void)setUserFacingReasonTitle:(NSString *)arg1 ;
@end

