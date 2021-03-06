/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKCacheObject.h>

@class NSDate, NSString, GKGameCacheObject;

@interface GKInviteCacheObject : GKCacheObject

@property (nonatomic,retain) NSDate * timeStamp; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSString * inviteID; 
@property (nonatomic,retain) GKGameCacheObject * game; 
+(id)entityName;
+(id)fetchSortDescriptors;
-(void)awakeFromInsert;
@end

