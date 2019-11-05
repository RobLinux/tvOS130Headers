/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAMPCollection, SAMPMediaItem, NSArray, NSString;

@interface SAMPSteerMusic : SADomainCommand

@property (nonatomic,retain) SAMPCollection * currentListeningToCollection; 
@property (nonatomic,retain) SAMPMediaItem * currentListeningToItem; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSString * steerableBlob; 
+(id)steerMusic;
+(id)steerMusicWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAMPCollection *)currentListeningToCollection;
-(void)setCurrentListeningToCollection:(SAMPCollection *)arg1 ;
-(SAMPMediaItem *)currentListeningToItem;
-(void)setCurrentListeningToItem:(SAMPMediaItem *)arg1 ;
-(NSString *)steerableBlob;
-(void)setSteerableBlob:(NSString *)arg1 ;
@end

