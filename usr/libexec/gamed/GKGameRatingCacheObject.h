/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKExpiringCacheObject.h>

@class NSString, NSNumber;

@interface GKGameRatingCacheObject : GKExpiringCacheObject

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * bundleVersion; 
@property (nonatomic,retain) NSNumber * rating; 
+(id)entityName;
+(id)ratingForGameDescriptor:(id)arg1 context:(id)arg2 ;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
@end

