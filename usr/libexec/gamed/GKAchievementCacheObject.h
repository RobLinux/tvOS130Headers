/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKListEntryCacheObject.h>

@class NSString, NSDate;

@interface GKAchievementCacheObject : GKListEntryCacheObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * groupIdentifier; 
@property (nonatomic,retain) NSDate * lastReportedDate; 
@property (assign,nonatomic) float percentComplete; 
+(id)entityName;
-(id)internalRepresentation;
-(void)updateWithServerRepresentation:(id)arg1 ;
@end

