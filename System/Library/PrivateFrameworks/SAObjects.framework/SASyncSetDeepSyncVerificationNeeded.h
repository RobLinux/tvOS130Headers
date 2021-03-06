/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncSetDeepSyncVerificationNeeded : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * keys; 
+(id)setDeepSyncVerificationNeeded;
+(id)setDeepSyncVerificationNeededWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)keys;
-(void)setKeys:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

