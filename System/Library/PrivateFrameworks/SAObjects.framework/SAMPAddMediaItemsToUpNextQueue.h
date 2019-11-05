/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAMPCollection;

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSString * insertLocation; 
@property (nonatomic,retain) SAMPCollection * mediaCollection; 
@property (nonatomic,copy) NSString * musicAccountSharedUserId; 
@property (nonatomic,copy) NSString * speakerSharedUserId; 
+(id)addMediaItemsToUpNextQueue;
+(id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)insertLocation;
-(void)setInsertLocation:(NSString *)arg1 ;
-(SAMPCollection *)mediaCollection;
-(void)setMediaCollection:(SAMPCollection *)arg1 ;
-(NSString *)musicAccountSharedUserId;
-(void)setMusicAccountSharedUserId:(NSString *)arg1 ;
-(NSString *)speakerSharedUserId;
-(void)setSpeakerSharedUserId:(NSString *)arg1 ;
@end

