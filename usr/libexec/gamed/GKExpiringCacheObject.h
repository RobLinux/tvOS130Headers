/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKPurgeableCacheObject.h>

@class NSDate;

@interface GKExpiringCacheObject : GKPurgeableCacheObject

@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL expired; 
+(id)fetchSortDescriptors;
+(void)expireObjectsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(void)invalidateObjectsMatchingPredicate:(id)arg1 context:(id)arg2 ;
-(void)invalidate;
-(BOOL)isValid;
-(void)awakeFromInsert;
-(void)expire;
-(BOOL)expired;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
@end

