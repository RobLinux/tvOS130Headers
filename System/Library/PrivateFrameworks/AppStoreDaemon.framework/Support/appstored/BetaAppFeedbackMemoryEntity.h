/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/SQLiteMemoryEntity.h>

@class ASDBetaAppVersion, ASDBetaAppFeedback, NSNumber, NSString, NSDate, NSArray;

@interface BetaAppFeedbackMemoryEntity : SQLiteMemoryEntity {

	ASDBetaAppVersion* _appVersion;
	ASDBetaAppFeedback* _feedback;

}

@property (nonatomic,readonly) NSNumber * accountDSID; 
@property (assign) int attemptCount; 
@property (nonatomic,readonly) ASDBetaAppVersion * appVersion;              //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,retain) ASDBetaAppFeedback * feedback;                 //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) NSString * logKey; 
@property (nonatomic,retain) NSDate * nextRetryDate; 
@property (nonatomic,retain) NSArray * pendingImageUploads; 
@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * successfulImageUploads; 
@property (nonatomic,readonly) NSNumber * itemID; 
+(id)defaultProperties;
+(Class)databaseEntityClass;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSNumber *)itemID;
-(int)attemptCount;
-(void)setAttemptCount:(int)arg1 ;
-(void)setFeedback:(ASDBetaAppFeedback *)arg1 ;
-(ASDBetaAppFeedback *)feedback;
-(ASDBetaAppVersion *)appVersion;
-(NSNumber *)accountDSID;
-(NSString *)logKey;
-(NSDate *)nextRetryDate;
-(NSArray *)successfulImageUploads;
-(void)setPendingImageUploads:(NSArray *)arg1 ;
-(NSArray *)pendingImageUploads;
-(void)addSuccessfulImageUpload:(id)arg1 ;
-(id)_decodedArrayForProperty:(id)arg1 ofClass:(Class)arg2 ;
-(void)setSuccessfulImageUploads:(NSArray *)arg1 ;
-(void)_removePendingImageUploadForURLString:(id)arg1 ;
-(void)setNextRetryDate:(NSDate *)arg1 ;
@end

