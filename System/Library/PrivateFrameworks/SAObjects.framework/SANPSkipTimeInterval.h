/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSArray;

@interface SANPSkipTimeInterval : SADomainCommand

@property (nonatomic,copy) NSNumber * adjustmentInMilliseconds; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
+(id)skipTimeInterval;
+(id)skipTimeIntervalWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)adjustmentInMilliseconds;
-(void)setAdjustmentInMilliseconds:(NSNumber *)arg1 ;
@end
