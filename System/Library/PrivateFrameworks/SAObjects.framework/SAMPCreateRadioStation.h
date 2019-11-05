/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray, NSNumber, NSURL;

@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * assetInfo; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSNumber * startPlaying; 
@property (nonatomic,copy) NSURL * stationUrl; 
+(id)createRadioStation;
+(id)createRadioStationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)startPlaying;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSString *)assetInfo;
-(void)setAssetInfo:(NSString *)arg1 ;
-(NSURL *)stationUrl;
-(void)setStationUrl:(NSURL *)arg1 ;
@end

