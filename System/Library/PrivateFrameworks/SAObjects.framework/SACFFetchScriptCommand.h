/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SACFFetchScriptCommand : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * fetchScriptType; 
@property (nonatomic,copy) NSArray * jsScriptIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)fetchScriptCommand;
+(id)fetchScriptCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)siriCore_bufferingAllowedDuringActiveSession;
-(BOOL)siriCore_isRetryable;
-(BOOL)siriCore_supportedByLocalSession;
-(BOOL)cf_shouldHandleLocally;
-(void)cf_handleWithCommandProcessor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_logAndCacheRemotelyFetchedScripts:(id)arg1 scriptFetchStartTime:(double)arg2 scriptFetchEndTime:(double)arg3 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)fetchScriptType;
-(void)setFetchScriptType:(NSString *)arg1 ;
-(NSArray *)jsScriptIdentifiers;
-(void)setJsScriptIdentifiers:(NSArray *)arg1 ;
@end

